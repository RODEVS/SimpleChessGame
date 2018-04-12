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

#include "sipAPIQtMultimedia.h"

#line 149 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtMultimedia/qvideoframe.sip"
#include <qvideoframe.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtMultimedia/sipQtMultimediaQList0100QVideoFramePixelFormat.cpp"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtMultimedia/qvideoframe.sip"
#include <qvideoframe.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtMultimedia/sipQtMultimediaQList0100QVideoFramePixelFormat.cpp"


extern "C" {static void assign_QList_0100QVideoFrame_PixelFormat(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QVideoFrame_PixelFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QList< ::QVideoFrame::PixelFormat> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QList< ::QVideoFrame::PixelFormat> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QVideoFrame_PixelFormat(SIP_SSIZE_T);}
static void *array_QList_0100QVideoFrame_PixelFormat(SIP_SSIZE_T sipNrElem)
{
    return new  ::QList< ::QVideoFrame::PixelFormat>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QVideoFrame_PixelFormat(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QVideoFrame_PixelFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QList< ::QVideoFrame::PixelFormat>(reinterpret_cast<const  ::QList< ::QVideoFrame::PixelFormat> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QVideoFrame_PixelFormat(void *, int);}
static void release_QList_0100QVideoFrame_PixelFormat(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::QList< ::QVideoFrame::PixelFormat> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QVideoFrame_PixelFormat(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QVideoFrame_PixelFormat(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QList< ::QVideoFrame::PixelFormat> **sipCppPtr = reinterpret_cast< ::QList< ::QVideoFrame::PixelFormat> **>(sipCppPtrV);

#line 179 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtMultimedia/qvideoframe.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToEnum(PyList_GET_ITEM(sipPy, i), sipType_QVideoFrame_PixelFormat))
                return 0;

        return 1;
    }

    QList<QVideoFrame::PixelFormat> *ql = new QList<QVideoFrame::PixelFormat>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        long l = SIPLong_AsLong(PyList_GET_ITEM(sipPy, i));
        ql->append(static_cast<QVideoFrame::PixelFormat>(l));
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 98 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtMultimedia/sipQtMultimediaQList0100QVideoFramePixelFormat.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QVideoFrame_PixelFormat(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QVideoFrame_PixelFormat(void *sipCppV, PyObject *)
{
    ::QList< ::QVideoFrame::PixelFormat> *sipCpp = reinterpret_cast< ::QList< ::QVideoFrame::PixelFormat> *>(sipCppV);

#line 153 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtMultimedia/qvideoframe.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QVideoFrame::PixelFormat e = sipCpp->at(i);
        PyObject *eobj;

        if ((eobj = sipConvertFromEnum(e, sipType_QVideoFrame_PixelFormat)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, eobj);
    }

    return l;
#line 131 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtMultimedia/sipQtMultimediaQList0100QVideoFramePixelFormat.cpp"
}


sipMappedTypeDef sipTypeDef_QtMultimedia_QList_0100QVideoFrame_PixelFormat = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_70,     /* QList<QVideoFrame::PixelFormat> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QVideoFrame_PixelFormat,
    array_QList_0100QVideoFrame_PixelFormat,
    copy_QList_0100QVideoFrame_PixelFormat,
    release_QList_0100QVideoFrame_PixelFormat,
    convertTo_QList_0100QVideoFrame_PixelFormat,
    convertFrom_QList_0100QVideoFrame_PixelFormat
};
