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

#include "sipAPIQtWebKit.h"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 73 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 31 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebPluginFactoryExtensionOption.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_ExtensionOption(void *, int);}
static void release_QWebPluginFactory_ExtensionOption(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QWebPluginFactory::ExtensionOption *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_ExtensionOption(void *, SIP_SSIZE_T, void *);}
static void assign_QWebPluginFactory_ExtensionOption(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QWebPluginFactory::ExtensionOption *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QWebPluginFactory::ExtensionOption *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_ExtensionOption(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_ExtensionOption(SIP_SSIZE_T sipNrElem)
{
    return new  ::QWebPluginFactory::ExtensionOption[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_ExtensionOption(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_ExtensionOption(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QWebPluginFactory::ExtensionOption(reinterpret_cast<const  ::QWebPluginFactory::ExtensionOption *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_ExtensionOption(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_ExtensionOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebPluginFactory_ExtensionOption(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebPluginFactory_ExtensionOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPluginFactory_ExtensionOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebPluginFactory::ExtensionOption *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWebPluginFactory::ExtensionOption();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QWebPluginFactory::ExtensionOption* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_ExtensionOption, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWebPluginFactory::ExtensionOption(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QWebPluginFactory_ExtensionOption, "\1QWebPluginFactory.ExtensionOption()\n"
"QWebPluginFactory.ExtensionOption(QWebPluginFactory.ExtensionOption)");


static pyqt4ClassPluginDef plugin_QWebPluginFactory_ExtensionOption = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_ExtensionOption = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__ExtensionOption,
        {0},
        &plugin_QWebPluginFactory_ExtensionOption
    },
    {
        sipNameNr_ExtensionOption,
        {40, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPluginFactory_ExtensionOption,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPluginFactory_ExtensionOption,
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
    dealloc_QWebPluginFactory_ExtensionOption,
    assign_QWebPluginFactory_ExtensionOption,
    array_QWebPluginFactory_ExtensionOption,
    copy_QWebPluginFactory_ExtensionOption,
    release_QWebPluginFactory_ExtensionOption,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
