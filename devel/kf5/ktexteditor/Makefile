# $OpenBSD: Makefile,v 1.13 2018/10/22 20:30:43 rsadowski Exp $

COMMENT =		fully featured text editor component
DISTNAME =		ktexteditor-${VERSION}

SHARED_LIBS =		KF5TextEditor		5.2

WANTLIB += ${COMPILER_LIBCXX} KF5Archive KF5Auth KF5Codecs KF5Completion
WANTLIB += KF5ConfigCore KF5ConfigGui KF5ConfigWidgets KF5CoreAddons
WANTLIB += KF5GuiAddons KF5I18n KF5IconThemes KF5ItemViews KF5JobWidgets
WANTLIB += KF5KIOCore KF5KIOWidgets KF5Parts KF5Service KF5SonnetCore
WANTLIB += KF5SonnetUi KF5SyntaxHighlighting KF5TextWidgets KF5WidgetsAddons
WANTLIB += KF5XmlGui Qt5Concurrent Qt5Core Qt5DBus Qt5Gui Qt5Network
WANTLIB += Qt5PrintSupport Qt5Qml Qt5Widgets Qt5Xml c git2 m

BUILD_DEPENDS =		devel/gettext-tools \
			x11/qt5/qtscript \
			x11/qt5/qtxmlpatterns

RUN_DEPENDS =		x11/qt5/qtscript \
			x11/qt5/qtxmlpatterns

LIB_DEPENDS =		devel/kf5/karchive \
			devel/kf5/kconfig \
			devel/kf5/kguiaddons \
			devel/kf5/ki18n \
			devel/kf5/kiconthemes \
			devel/kf5/kio \
			devel/kf5/kparts \
			devel/kf5/sonnet \
			devel/kf5/syntax-highlighting \
			devel/libgit2/libgit2

TEST_IS_INTERACTIVE =	X11
PORTHOME =		${WRKDIR}

.include <bsd.port.mk>
