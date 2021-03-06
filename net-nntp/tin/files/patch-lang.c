<head>
<meta name="robots" content="nofollow">
<meta name="generator" content="FreeBSD-CVSweb 2.0.6">
<meta http-equiv="Content-Script-Type" content="text/javascript">
<meta http-equiv="Content-Style-Type" content="text/css">
<title>CVS log for ports/chinese/tin/files/Attic/patch-lang.c</title>
<meta http-equiv='content-type' content='text/html; charset=iso-8859-1' >
<meta name='robots' content='nofollow' >
    <link rel="stylesheet" media="screen"
    href="http://www.FreeBSD.org/layout/css/fixed.css" type="text/css"
    title="Normal Text" >
    <link rel="alternate stylesheet" media="screen"
    href="http://www.FreeBSD.org/layout/css/fixed_large.css" type="text/css"
    title="Large Text" >

<script type="text/javascript" src="http://www.FreeBSD.org/layout/js/styleswitcher.js">
</script>

</head>
<body>

    <div id="containerwrap">
      <div id="container">
        <span class="txtoffscreen"><a href="#content"
        title="Skip site navigation" accesskey="1">Skip site
        navigation</a> (1)</span><span class="txtoffscreen"><a
        href="#content" title="Skip section navigation"
        accesskey="2">Skip section navigation</a> (2)</span>

        <div id="headercontainer">
          <div id="header">
            <h2 class="blockhide">Header And Logo</h2>

            <div id="headerlogoleft">
              <a href="http://www.FreeBSD.org" title="FreeBSD"><img
              src="http://www.FreeBSD.org/layout/images/logo-red.png" width="457"
              height="75" alt="FreeBSD" /></a>
            </div>

            <div id="headerlogoright">
              <h2 class="blockhide">Peripheral Links</h2>

              <div id="searchnav">
                <ul id="searchnavlist">
                  <li>Text Size: <a href="#"
                  onkeypress="return false;"
                  onclick="setActiveStyleSheet('Normal Text'); return false;"
                   title="Normal Text Size">Normal</a> / <a
                  href="#" onkeypress="return false;"
                  onclick="setActiveStyleSheet('Large Text'); return false;"
                   title="Large Text Size">Large</a></li>

                  <li><a href="http://www.FreeBSD.org/donations/"
                  title="Donate">Donate</a></li>

                  <li class="last-child"><a href="http://www.FreeBSD.org/mailto.html"
                  title="Contact">Contact</a></li>
                </ul>
              </div>

              <div id="search">
                <form
                action="http://www.FreeBSD.org/cgi/search.cgi"
                method="get">
                  <div>
                    <h2 class="blockhide"><label
                    for="words">Search</label></h2>
                    <input type="hidden" name="max"
                    value="25" /><input type="hidden" name="source"
                    value="www" /><input id="words" name="words"
                    type="text" size="20" maxlength="255"
                    onfocus="if( this.value==this.defaultValue ) this.value='';"
                     value="Search" />&nbsp;<input id="submit"
                    name="submit" type="submit" value="Search" />
                  </div>
                </form>
              </div>
            </div>
          </div>

          <h2 class="blockhide">Site Navigation</h2>

          <div id="topnav">
            <ul id="topnavlist">
              <li><a href="http://www.FreeBSD.org/" title="Home">Home</a></li>

              <li><a href="http://www.FreeBSD.org/about.html"
              title="About">About</a></li>

              <li><a href="http://www.FreeBSD.org/where.html" title="Get FreeBSD">Get
              FreeBSD</a></li>

              <li><a href="http://www.FreeBSD.org/docs.html"
              title="Documentation">Documentation</a></li>

              <li><a href="http://www.FreeBSD.org/community.html"
              title="Community">Community</a></li>

              <li><a href="http://www.FreeBSD.org/projects/index.html"
              title="Developers">Developers</a></li>

              <li><a href="http://www.FreeBSD.org/support.html"
              title="Support">Support</a></li>
            </ul>
          </div>
        </div>

	<div id="content">

<h1>CVS log for ports/chinese/tin/files/Attic/patch-lang.c</h1>
<p>
 <a href="/cgi/cvsweb.cgi/ports/chinese/tin/files/#patch-lang.c"><img src="/icons/back.gif" alt="[BACK]" border="0" width="20" height="22"></a> <b>Up to  <a href="/cgi/cvsweb.cgi/#dirlist">[freebsd]</a> / <a href="/cgi/cvsweb.cgi/ports/#dirlist">ports</a> / <a href="/cgi/cvsweb.cgi/ports/chinese/#dirlist">chinese</a> / <a href="/cgi/cvsweb.cgi/ports/chinese/tin/#dirlist">tin</a> / <a href="/cgi/cvsweb.cgi/ports/chinese/tin/files/#dirlist">files</a></b>
</p>
<p>
 <a href="#diff">Request diff between arbitrary revisions</a>
</p>
<hr noshade>
<p>
Default branch: MAIN<br>
</p>
<hr size="1" noshade>
<p>
Revision <b>1.2</b>, <i>Sun Jan 12 00:54:48 2003 UTC</i> (3 years, 9 months ago) by <i>leeym</i>
<br>Branch: <b><a href="./patch-lang.c?only_with_tag=MAIN">MAIN</a>
</b>
<br>CVS Tags: <b><a href="./patch-lang.c?only_with_tag=HEAD">HEAD</a>
</b><br>Changes since <b>1.1: +0 -0
 lines</b><br><b><i>FILE REMOVED</i></b>

</p>
<pre>
upgrade and unbreak chinese/tin to 1.5.16

PR:		<a href="http://www.FreeBSD.org/cgi/query-pr.cgi?pr=46878">ports/46878</a>
Submitted by:	leeym
Reviewed by:	<a href="mailto:yssu@CCCA.NCTU.edu.tw">yssu@CCCA.NCTU.edu.tw</a> (MAINTAINER)
</pre>
<hr size="1" noshade>
<p>
<a name="rev1.1"></a><a name="RELEASE_5_0_0"></a><a name="RELEASE_4_7_0"></a><a name="RELEASE_4_6_2"></a><a name="RELEASE_4_6_1"></a><a name="RELEASE_4_6_0"></a><a name="MAIN"></a>
 Revision <a href="patch-lang.c?rev=1.1&amp;content-type=text/x-cvsweb-markup"><b>1.1</b></a> / (<a href="/cgi/cvsweb.cgi/~checkout~/ports/chinese/tin/files/Attic/patch-lang.c?rev=1.1&amp;content-type=text/plain" target="cvs_checkout" onclick="window.open('/cgi/cvsweb.cgi/~checkout~/ports/chinese/tin/files/Attic/patch-lang.c?rev=1.1&amp;content-type=text/plain','cvs_checkout','resizable,scrollbars');return false"><b>download</b></a>) - <a href="/cgi/cvsweb.cgi/ports/chinese/tin/files/Attic/patch-lang.c?annotate=1.1">annotate</a> - <a href="/cgi/cvsweb.cgi/ports/chinese/tin/files/Attic/patch-lang.c?r1=1.1">[select for diffs]</a>, <i>Thu May  9 19:28:07 2002 UTC</i> (4 years, 5 months ago) by <i>clive</i>
<br>Branch: <b><a href="./patch-lang.c?only_with_tag=MAIN">MAIN</a>
</b>
<br>CVS Tags: <b><a href="./patch-lang.c?only_with_tag=RELEASE_5_0_0">RELEASE_5_0_0</a>,
<a href="./patch-lang.c?only_with_tag=RELEASE_4_7_0">RELEASE_4_7_0</a>,
<a href="./patch-lang.c?only_with_tag=RELEASE_4_6_2">RELEASE_4_6_2</a>,
<a href="./patch-lang.c?only_with_tag=RELEASE_4_6_1">RELEASE_4_6_1</a>,
<a href="./patch-lang.c?only_with_tag=RELEASE_4_6_0">RELEASE_4_6_0</a>
</b><br>
</p>
<pre>
In case tin links against libiconv now, teach tin to recognize BIG5
charset.

Noted by: My post became 8bit stripped.
</pre>
<hr noshade>
<p>
<a name="diff">
This form allows you to request diff's between any two
revisions of a file.  You may select a symbolic revision
name using the selection box or you may type in a numeric
name using the type-in text box.
</a>
</p>
<form method="get" action="/cgi/cvsweb.cgi/ports/chinese/tin/files/Attic/patch-lang.c.diff" name="diff_select">
<table style="border: none">
<tr>
<td align="right"><label for="r1" accesskey="1">Diffs between </label>
<select id="r1" name="r1">
<option value="text" selected>Use Text Field</option>
<option value="1.1:RELEASE_5_0_0">RELEASE_5_0_0</option>
<option value="1.1:RELEASE_4_7_0">RELEASE_4_7_0</option>
<option value="1.1:RELEASE_4_6_2">RELEASE_4_6_2</option>
<option value="1.1:RELEASE_4_6_1">RELEASE_4_6_1</option>
<option value="1.1:RELEASE_4_6_0">RELEASE_4_6_0</option>
<option value="1:MAIN">MAIN</option>
<option value="1.2:HEAD">HEAD</option>
</select>
<input type="text" size="12" name="tr1" value="1.1" onchange="this.form.r1.selectedIndex=0"></td>
<td><br></td>
</tr>
<tr>
<td align="right"><label for="r2" accesskey="2">and </label>
<select id="r2" name="r2">
<option value="text" selected>Use Text Field</option>
<option value="1.1:RELEASE_5_0_0">RELEASE_5_0_0</option>
<option value="1.1:RELEASE_4_7_0">RELEASE_4_7_0</option>
<option value="1.1:RELEASE_4_6_2">RELEASE_4_6_2</option>
<option value="1.1:RELEASE_4_6_1">RELEASE_4_6_1</option>
<option value="1.1:RELEASE_4_6_0">RELEASE_4_6_0</option>
<option value="1:MAIN">MAIN</option>
<option value="1.2:HEAD">HEAD</option>
</select>
<input type="text" size="12" name="tr2" value="1.2" onchange="this.form.r2.selectedIndex=0"></td>
<td><input type="submit" value="  Get Diffs  " accesskey="G"></td>
</tr>
</table>
</form>
<hr noshade>
<form method="get" action="/cgi/cvsweb.cgi/ports/chinese/tin/files/Attic/patch-lang.c">
<table style="border: none">
<tr>
<td align="right"><label for="f" accesskey="D">Preferred Diff type:</label></td>
<td><select id="f" name="f" onchange="this.form.submit()">
<option value="h">Colored</option>
<option value="H">Long colored</option>
<option value="u" selected>Unified</option>
<option value="c">Context</option>
<option value="s">Side by side</option>
</select></td>
<td></td>
</tr>
<tr>
<td align="right"><label for="only_with_tag" accesskey="B">View only Branch:</label></td>
<td><a name="branch"></a>
<select id="only_with_tag" name="only_with_tag" onchange="this.form.submit()">
<option value="">Show all branches</option>
<option>MAIN</option>
</select></td>
<td></td>
</tr>
<tr>
<td align="right"><a name="logsort"></a>
<label for="logsort" accesskey="L">Sort log by:</label></td>
<td><select id="logsort" name="logsort" onchange="this.form.submit()">
<option value="cvs">Not sorted</option>
<option value="date" selected>Commit date</option>
<option value="rev">Revision</option>
</select></td>
<td><input type="submit" value="  Set  " accesskey="S"></td>
</tr>
</table>
</form>

	</div>
        <div id="footer">
          <a href="http://www.FreeBSD.org/copyright/">Legal Notices</a> | &copy; 1995-2006
          The FreeBSD Project. All rights reserved.<br />
	  <address><a href='http://www.FreeBSD.org/mailto.html'>www@FreeBSD.org</a><br />2005/10/28 14:55:57</address>
        </div>
      </div>
    </div>
  </body>
</html>
