# Copyright 1999-2008 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

inherit autotools eutils subversion

DESCRIPTION="A python wrapper for Smart Common Input Method (SCIM)"
HOMEPAGE="http://code.google.com/p/scim-python/"
#SRC_URI="http://scim-python.googlecode.com/files/${P}.tar.bz2"
ESVN_REPO_URI="http://scim-python.googlecode.com/svn/trunk"
PYDBTAR="pinyin-database-0.1.10.5.tar.bz2"
SRC_URI="pinyin? ( http://scim-python.googlecode.com/files/${PYDBTAR} )"
RESTRICT="mirror"


LICENSE="GPL-2"
SLOT="0"
KEYWORDS=""
IUSE="nls pinyin enwriter xingma"

RDEPEND="x11-libs/libXt
	>=dev-lang/python-2.5
	>=dev-python/pygtk-2.10.1
	enwriter? ( dev-python/pyenchant )
	|| ( >=app-i18n/scim-1.1 >=app-i18n/scim-cvs-1.1 )
	nls? ( virtual/libintl )
	"
DEPEND="${RDEPEND}
	dev-util/pkgconfig
	dev-util/cvs
	nls? ( sys-devel/gettext )"

pkg_setup() {
	if ! built_with_use '>=dev-lang/python-2.5' sqlite; then
		echo
		ewarn "You need build dev-lang/python-2.5 with \"sqlite\" USE flag"
		echo
		ebeep 3
	fi
}


src_unpack() {
	subversion_src_unpack
	if use pinyin; then
		unpack ${PYDBTAR}
		cp "${DISTDIR}/${PYDBTAR}" "${S}/python/engine/PinYin/" || die
		mv "py.db" "${S}/python/engine/PinYin/" || die
	fi
	cd "${S}"
	autopoint
	AT_NO_RECURSIVE=yes AT_M4DIR=${S}/m4
	eautoreconf
}

src_compile() {
	econf \
		$(use_enable pinyin) \
		$(use_enable xingma) \
		$(use_enable nls) \
		$(use_enable enwriter english-writer) \
		|| die "econf failed"
	emake || die "make failed"
}

src_install() {
	emake DESTDIR="${D}" install || die "install failed"
	dodoc README ChangeLog AUTHORS NEWS TODO
}

pkg_postinst() {
	if use xingma; then
		einfo
		einfo "To use XingMa Input Methond Engine"
		einfo "You need to emerge app-i18n/scim-xingma with the USE you need"
		einfo
		epause
	fi
	ewarn "DO NOT report bugs to Gentoo's bugzilla"
	einfo "Please report all bugs to scim-python project"
	einfo "\thttp://code.google.com/p/scim-python/issues/list"
	einfo
}