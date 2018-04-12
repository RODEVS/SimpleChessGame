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

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtWebKit/qwebframe.sip"
#include <qwebframe.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"

#line 28 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtWebKit/qwebelement.sip"
#include <qwebelement.h>
#line 33 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"
#line 68 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtWebKit/qwebframe.sip"
#include <qwebframe.h>
#line 39 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 42 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"
#line 98 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 45 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"
#line 27 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"
#line 26 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 51 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtWebKit/sipQtWebKitQWebHitTestResult.cpp"


PyDoc_STRVAR(doc_QWebHitTestResult_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QWebHitTestResult_isNull(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_isNull, doc_QWebHitTestResult_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QWebHitTestResult_pos(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_pos, doc_QWebHitTestResult_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_title, "title(self) -> str");

extern "C" {static PyObject *meth_QWebHitTestResult_title(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_title(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->title());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_title, doc_QWebHitTestResult_title);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_linkText, "linkText(self) -> str");

extern "C" {static PyObject *meth_QWebHitTestResult_linkText(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_linkText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->linkText());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_linkText, doc_QWebHitTestResult_linkText);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_linkUrl, "linkUrl(self) -> QUrl");

extern "C" {static PyObject *meth_QWebHitTestResult_linkUrl(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_linkUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QUrl(sipCpp->linkUrl());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_linkUrl, doc_QWebHitTestResult_linkUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_linkTitle, "linkTitle(self) -> QUrl");

extern "C" {static PyObject *meth_QWebHitTestResult_linkTitle(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_linkTitle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QUrl(sipCpp->linkTitle());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_linkTitle, doc_QWebHitTestResult_linkTitle);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_linkTargetFrame, "linkTargetFrame(self) -> QWebFrame");

extern "C" {static PyObject *meth_QWebHitTestResult_linkTargetFrame(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_linkTargetFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QWebFrame*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->linkTargetFrame();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWebFrame,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_linkTargetFrame, doc_QWebHitTestResult_linkTargetFrame);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_alternateText, "alternateText(self) -> str");

extern "C" {static PyObject *meth_QWebHitTestResult_alternateText(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_alternateText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QString(sipCpp->alternateText());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_alternateText, doc_QWebHitTestResult_alternateText);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_imageUrl, "imageUrl(self) -> QUrl");

extern "C" {static PyObject *meth_QWebHitTestResult_imageUrl(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_imageUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QUrl(sipCpp->imageUrl());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_imageUrl, doc_QWebHitTestResult_imageUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_pixmap, "pixmap(self) -> QPixmap");

extern "C" {static PyObject *meth_QWebHitTestResult_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QPixmap(sipCpp->pixmap());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_pixmap, doc_QWebHitTestResult_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_isContentEditable, "isContentEditable(self) -> bool");

extern "C" {static PyObject *meth_QWebHitTestResult_isContentEditable(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_isContentEditable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isContentEditable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_isContentEditable, doc_QWebHitTestResult_isContentEditable);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_isContentSelected, "isContentSelected(self) -> bool");

extern "C" {static PyObject *meth_QWebHitTestResult_isContentSelected(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_isContentSelected(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isContentSelected();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_isContentSelected, doc_QWebHitTestResult_isContentSelected);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_frame, "frame(self) -> QWebFrame");

extern "C" {static PyObject *meth_QWebHitTestResult_frame(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_frame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QWebFrame*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->frame();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWebFrame,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_frame, doc_QWebHitTestResult_frame);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_boundingRect, "boundingRect(self) -> QRect");

extern "C" {static PyObject *meth_QWebHitTestResult_boundingRect(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_boundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QRect(sipCpp->boundingRect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_boundingRect, doc_QWebHitTestResult_boundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_enclosingBlockElement, "enclosingBlockElement(self) -> QWebElement");

extern "C" {static PyObject *meth_QWebHitTestResult_enclosingBlockElement(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_enclosingBlockElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QWebElement*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QWebElement(sipCpp->enclosingBlockElement());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_enclosingBlockElement, doc_QWebHitTestResult_enclosingBlockElement);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_linkElement, "linkElement(self) -> QWebElement");

extern "C" {static PyObject *meth_QWebHitTestResult_linkElement(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_linkElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QWebElement*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QWebElement(sipCpp->linkElement());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_linkElement, doc_QWebHitTestResult_linkElement);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHitTestResult_element, "element(self) -> QWebElement");

extern "C" {static PyObject *meth_QWebHitTestResult_element(PyObject *, PyObject *);}
static PyObject *meth_QWebHitTestResult_element(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QWebHitTestResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHitTestResult, &sipCpp))
        {
             ::QWebElement*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QWebElement(sipCpp->element());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHitTestResult, sipName_element, doc_QWebHitTestResult_element);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebHitTestResult(void *, int);}
static void release_QWebHitTestResult(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QWebHitTestResult *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebHitTestResult(void *, SIP_SSIZE_T, void *);}
static void assign_QWebHitTestResult(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QWebHitTestResult *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QWebHitTestResult *>(sipSrc);
}


extern "C" {static void *array_QWebHitTestResult(SIP_SSIZE_T);}
static void *array_QWebHitTestResult(SIP_SSIZE_T sipNrElem)
{
    return new  ::QWebHitTestResult[sipNrElem];
}


extern "C" {static void *copy_QWebHitTestResult(const void *, SIP_SSIZE_T);}
static void *copy_QWebHitTestResult(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QWebHitTestResult(reinterpret_cast<const  ::QWebHitTestResult *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebHitTestResult(sipSimpleWrapper *);}
static void dealloc_QWebHitTestResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWebHitTestResult(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QWebHitTestResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebHitTestResult(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QWebHitTestResult *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWebHitTestResult();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QWebHitTestResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebHitTestResult, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QWebHitTestResult(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWebHitTestResult[] = {
    {SIP_MLNAME_CAST(sipName_alternateText), meth_QWebHitTestResult_alternateText, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_alternateText)},
    {SIP_MLNAME_CAST(sipName_boundingRect), meth_QWebHitTestResult_boundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_boundingRect)},
    {SIP_MLNAME_CAST(sipName_element), meth_QWebHitTestResult_element, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_element)},
    {SIP_MLNAME_CAST(sipName_enclosingBlockElement), meth_QWebHitTestResult_enclosingBlockElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_enclosingBlockElement)},
    {SIP_MLNAME_CAST(sipName_frame), meth_QWebHitTestResult_frame, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_frame)},
    {SIP_MLNAME_CAST(sipName_imageUrl), meth_QWebHitTestResult_imageUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_imageUrl)},
    {SIP_MLNAME_CAST(sipName_isContentEditable), meth_QWebHitTestResult_isContentEditable, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_isContentEditable)},
    {SIP_MLNAME_CAST(sipName_isContentSelected), meth_QWebHitTestResult_isContentSelected, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_isContentSelected)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QWebHitTestResult_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_isNull)},
    {SIP_MLNAME_CAST(sipName_linkElement), meth_QWebHitTestResult_linkElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_linkElement)},
    {SIP_MLNAME_CAST(sipName_linkTargetFrame), meth_QWebHitTestResult_linkTargetFrame, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_linkTargetFrame)},
    {SIP_MLNAME_CAST(sipName_linkText), meth_QWebHitTestResult_linkText, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_linkText)},
    {SIP_MLNAME_CAST(sipName_linkTitle), meth_QWebHitTestResult_linkTitle, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_linkTitle)},
    {SIP_MLNAME_CAST(sipName_linkUrl), meth_QWebHitTestResult_linkUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_linkUrl)},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QWebHitTestResult_pixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_pixmap)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QWebHitTestResult_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_pos)},
    {SIP_MLNAME_CAST(sipName_title), meth_QWebHitTestResult_title, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHitTestResult_title)}
};

PyDoc_STRVAR(doc_QWebHitTestResult, "\1QWebHitTestResult()\n"
"QWebHitTestResult(QWebHitTestResult)");


static pyqt4ClassPluginDef plugin_QWebHitTestResult = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWebKit_QWebHitTestResult = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebHitTestResult,
        {0},
        &plugin_QWebHitTestResult
    },
    {
        sipNameNr_QWebHitTestResult,
        {0, 0, 1},
        17, methods_QWebHitTestResult,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebHitTestResult,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebHitTestResult,
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
    dealloc_QWebHitTestResult,
    assign_QWebHitTestResult,
    array_QWebHitTestResult,
    copy_QWebHitTestResult,
    release_QWebHitTestResult,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
