# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=4
inherit cmake-utils git-2

DESCRIPTION="avplayer is a p2p video downloader and player"
HOMEPAGE="http://avplayer.avplayer.org"
SRC_URI=""

EGIT_REPO_URI="git://github.com/avplayer/avplayer.git"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="~amd64 ~x86"
IUSE="libtorrent"

DEPEND=">=dev-libs/boost-1.49"
RDEPEND="${DEPEND}"



