TARGET = QtSvg.so
OFILES = sipQtSvgcmodule.o sipQtSvgQSvgWidget.o sipQtSvgQSvgRenderer.o sipQtSvgQSvgGenerator.o sipQtSvgQGraphicsSvgItem.o
HFILES = sipAPIQtSvg.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_DISABLE_DEPRECATED_BEFORE=0x04ffff -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/usr/include/python3.6m -I/usr/mkspecs/linux-g++ -I/usr/include/qt/QtSvg -I/usr/include/qt/QtGui -I/usr/include/qt/QtWidgets -I/usr/include/qt/QtPrintSupport -I/usr/include/qt/QtCore -I/usr/include/qt
CFLAGS = -fPIC -O2 -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong -fno-plt -Wall -W -D_REENTRANT
CXXFLAGS = -fPIC -O2 -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong -fno-plt -Wall -W -D_REENTRANT
LFLAGS = -shared  -Wl,-O1 -Wl,-O1,--sort-common,--as-needed,-z,relro,-z,now -Wl,-rpath,/usr/lib -Wl,--version-script=QtSvg.exp
LIBS = -L/usr/lib -lQt5Svg -lQt5Widgets -lQt5Gui -lQt5Core -lpthread -lQt5Gui -lQt5Core -lpthread -lQt5Widgets -lQt5PrintSupport -lQt5Core -lpthread -lXext -lX11 -lm -lpthread
MOC = /usr/bin/moc
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_QtSvg; local: *; };' > QtSvg.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3.6/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python3.6/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3.6/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python3.6/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtSvg || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtSvg
	cp -f /home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtSvg/qgraphicssvgitem.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qgraphicssvgitem.sip
	cp -f /home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtSvg/qsvggenerator.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qsvggenerator.sip
	cp -f /home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtSvg/qsvgrenderer.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qsvgrenderer.sip
	cp -f /home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtSvg/QtSvgmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/QtSvgmod.sip
	cp -f /home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtSvg/qsvgwidget.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qsvgwidget.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtSvgcmodule.o
	-rm -f sipQtSvgQSvgWidget.o
	-rm -f sipQtSvgQSvgRenderer.o
	-rm -f sipQtSvgQSvgGenerator.o
	-rm -f sipQtSvgQGraphicsSvgItem.o
	-rm -f QtSvg.exp
