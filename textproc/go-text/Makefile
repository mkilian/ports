# $OpenBSD: Makefile,v 1.7 2018/09/23 17:20:21 jsing Exp $

COMMENT =	Go text processing support
DISTNAME =	go-text-20180825
GH_ACCOUNT =	golang
GH_PROJECT =	text
GH_COMMIT =	6e3c4e7365ddcc329f090f96e4348398f6310088
CATEGORIES =	textproc devel

HOMEPAGE =	https://godoc.org/golang.org/x/text

MAINTAINER =	Dmitrij D. Czarkoff <czarkoff@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM =Yes

WANTLIB =	c pthread

MODULES =	lang/go

MODGO_TYPE =	bin lib

# message/pipeline depends on go-tools, which creates an import loop...
# we also do not package go-tools as a go module.

_MAIN =		golang.org/x/text
_SUBPKGS =	cases \
		collate \
		collate/build \
		collate/tools/colcmp \
		currency \
		date \
		encoding \
		encoding/charmap \
		encoding/htmlindex \
		encoding/ianaindex \
		encoding/internal \
		encoding/internal/enctest \
		encoding/internal/identifier \
		encoding/japanese \
		encoding/korean \
		encoding/simplifiedchinese \
		encoding/traditionalchinese \
		encoding/unicode \
		encoding/unicode/utf32 \
		feature/plural \
		internal \
		internal/catmsg \
		internal/cldrtree \
		internal/colltab \
		internal/export/idna \
		internal/format \
		internal/gen \
		internal/gen/bitfield \
		internal/language \
		internal/language/compact \
		internal/number \
		internal/stringset \
		internal/tag \
		internal/testtext \
		internal/triegen \
		internal/ucd \
		internal/utf8internal \
		language \
		language/display \
		message \
		message/catalog \
		number \
		runes \
		search \
		secure \
		secure/bidirule \
		secure/precis \
		transform \
		unicode \
		unicode/bidi \
		unicode/cldr \
		unicode/norm \
		unicode/rangetable \
		unicode/runenames \
		width

ALL_TARGET =	${_MAIN} ${_SUBPKGS:%=${_MAIN}/%}
WRKSRC =	${MODGO_WORKSPACE}/src/${_MAIN}

.include <bsd.port.mk>
