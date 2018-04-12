/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qfileiconprovider.sip"
#include <qfileiconprovider.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileIconProvider.cpp"

#line 27 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileIconProvider.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qfileinfo.sip"
#include <qfileinfo.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileIconProvider.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 39 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQFileIconProvider.cpp"


class sipQFileIconProvider : public  ::QFileIconProvider
{
public:
    sipQFileIconProvider();
    virtual ~sipQFileIconProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString type(const  ::QFileInfo&) const;
     ::QIcon icon(const  ::QFileInfo&) const;
     ::QIcon icon( ::QFileIconProvider::IconType) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQFileIconProvider(const sipQFileIconProvider &);
    sipQFileIconProvider &operator = (const sipQFileIconProvider &);

    char sipPyMethods[3];
};

sipQFileIconProvider::sipQFileIconProvider():  ::QFileIconProvider(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFileIconProvider::~sipQFileIconProvider()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQFileIconProvider::type(const  ::QFileInfo& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_type);

    if (!sipMeth)
        return  ::QFileIconProvider::type(a0);

    extern  ::QString sipVH_QtGui_148(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QFileInfo&);

    return sipVH_QtGui_148(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QIcon sipQFileIconProvider::icon(const  ::QFileInfo& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_icon);

    if (!sipMeth)
        return  ::QFileIconProvider::icon(a0);

    extern  ::QIcon sipVH_QtGui_147(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QFileInfo&);

    return sipVH_QtGui_147(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::QIcon sipQFileIconProvider::icon( ::QFileIconProvider::IconType a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_icon);

    if (!sipMeth)
        return  ::QFileIconProvider::icon(a0);

    extern  ::QIcon sipVH_QtGui_146(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QFileIconProvider::IconType);

    return sipVH_QtGui_146(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QFileIconProvider_icon, "icon(self, QFileIconProvider.IconType) -> QIcon\n"
"icon(self, QFileInfo) -> QIcon");

extern "C" {static PyObject *meth_QFileIconProvider_icon(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QFileIconProvider::IconType a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileIconProvider_IconType, &a0))
        {
             ::QIcon*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QIcon((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::icon(a0) : sipCpp->icon(a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    {
        const  ::QFileInfo* a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileInfo, &a0))
        {
             ::QIcon*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QIcon((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::icon(*a0) : sipCpp->icon(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_icon, doc_QFileIconProvider_icon);

    return NULL;
}


PyDoc_STRVAR(doc_QFileIconProvider_type, "type(self, QFileInfo) -> str");

extern "C" {static PyObject *meth_QFileIconProvider_type(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileInfo* a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileInfo, &a0))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::type(*a0) : sipCpp->type(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_type, doc_QFileIconProvider_type);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileIconProvider(void *, int);}
static void release_QFileIconProvider(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQFileIconProvider *>(sipCppV);
    else
        delete reinterpret_cast< ::QFileIconProvider *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFileIconProvider(sipSimpleWrapper *);}
static void dealloc_QFileIconProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQFileIconProvider *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileIconProvider(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QFileIconProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileIconProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQFileIconProvider *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQFileIconProvider();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QFileIconProvider[] = {
    {SIP_MLNAME_CAST(sipName_icon), meth_QFileIconProvider_icon, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileIconProvider_icon)},
    {SIP_MLNAME_CAST(sipName_type), meth_QFileIconProvider_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileIconProvider_type)}
};

static sipEnumMemberDef enummembers_QFileIconProvider[] = {
    {sipName_Computer, static_cast<int>( ::QFileIconProvider::Computer), 112},
    {sipName_Desktop, static_cast<int>( ::QFileIconProvider::Desktop), 112},
    {sipName_Drive, static_cast<int>( ::QFileIconProvider::Drive), 112},
    {sipName_File, static_cast<int>( ::QFileIconProvider::File), 112},
    {sipName_Folder, static_cast<int>( ::QFileIconProvider::Folder), 112},
    {sipName_Network, static_cast<int>( ::QFileIconProvider::Network), 112},
    {sipName_Trashcan, static_cast<int>( ::QFileIconProvider::Trashcan), 112},
};

PyDoc_STRVAR(doc_QFileIconProvider, "\1QFileIconProvider()");


static pyqt4ClassPluginDef plugin_QFileIconProvider = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QFileIconProvider = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFileIconProvider,
        {0},
        &plugin_QFileIconProvider
    },
    {
        sipNameNr_QFileIconProvider,
        {0, 0, 1},
        2, methods_QFileIconProvider,
        7, enummembers_QFileIconProvider,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFileIconProvider,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QFileIconProvider,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QFileIconProvider,
    0,
    0,
    0,
    release_QFileIconProvider,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
