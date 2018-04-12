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

#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qpixmapcache.sip"
#include <qpixmapcache.h>
#line 35 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qpixmapcache.sip"
#include <qpixmapcache.h>
#line 31 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtGui/sipQtGuiQPixmapCacheKey.cpp"



extern "C" {static PyObject *slot_QPixmapCache_Key___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPixmapCache_Key___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPixmapCache::Key *sipCpp = reinterpret_cast< ::QPixmapCache::Key *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPixmapCache_Key));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPixmapCache::Key* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPixmapCache_Key, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QPixmapCache::Key::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QPixmapCache_Key, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPixmapCache_Key___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPixmapCache_Key___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPixmapCache::Key *sipCpp = reinterpret_cast< ::QPixmapCache::Key *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPixmapCache_Key));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPixmapCache::Key* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPixmapCache_Key, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::QPixmapCache::Key::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QPixmapCache_Key, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPixmapCache_Key(void *, int);}
static void release_QPixmapCache_Key(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QPixmapCache::Key *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPixmapCache_Key(void *, SIP_SSIZE_T, void *);}
static void assign_QPixmapCache_Key(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPixmapCache::Key *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPixmapCache::Key *>(sipSrc);
}


extern "C" {static void *array_QPixmapCache_Key(SIP_SSIZE_T);}
static void *array_QPixmapCache_Key(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPixmapCache::Key[sipNrElem];
}


extern "C" {static void *copy_QPixmapCache_Key(const void *, SIP_SSIZE_T);}
static void *copy_QPixmapCache_Key(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPixmapCache::Key(reinterpret_cast<const  ::QPixmapCache::Key *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPixmapCache_Key(sipSimpleWrapper *);}
static void dealloc_QPixmapCache_Key(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPixmapCache_Key(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPixmapCache_Key(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPixmapCache_Key(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPixmapCache::Key *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPixmapCache::Key();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QPixmapCache::Key* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixmapCache_Key, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QPixmapCache::Key(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPixmapCache_Key[] = {
    {(void *)slot_QPixmapCache_Key___ne__, ne_slot},
    {(void *)slot_QPixmapCache_Key___eq__, eq_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QPixmapCache_Key, "\1QPixmapCache.Key()\n"
"QPixmapCache.Key(QPixmapCache.Key)");


static pyqt4ClassPluginDef plugin_QPixmapCache_Key = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPixmapCache_Key = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPixmapCache__Key,
        {0},
        &plugin_QPixmapCache_Key
    },
    {
        sipNameNr_Key,
        {396, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPixmapCache_Key,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPixmapCache_Key,
    init_type_QPixmapCache_Key,
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
    dealloc_QPixmapCache_Key,
    assign_QPixmapCache_Key,
    array_QPixmapCache_Key,
    copy_QPixmapCache_Key,
    release_QPixmapCache_Key,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
