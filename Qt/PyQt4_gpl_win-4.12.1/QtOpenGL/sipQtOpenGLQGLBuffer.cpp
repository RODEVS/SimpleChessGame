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

#include "sipAPIQtOpenGL.h"

#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/sip/QtOpenGL/qglbuffer.sip"
#include <qglbuffer.h>
#line 29 "/home/rodrigo/Documents/Ajedrez/Qt/PyQt4_gpl_win-4.12.1/QtOpenGL/sipQtOpenGLQGLBuffer.cpp"



PyDoc_STRVAR(doc_QGLBuffer_type, "type(self) -> QGLBuffer.Type");

extern "C" {static PyObject *meth_QGLBuffer_type(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
             ::QGLBuffer::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QGLBuffer_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_type, doc_QGLBuffer_type);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_usagePattern, "usagePattern(self) -> QGLBuffer.UsagePattern");

extern "C" {static PyObject *meth_QGLBuffer_usagePattern(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_usagePattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
             ::QGLBuffer::UsagePattern sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->usagePattern();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QGLBuffer_UsagePattern);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_usagePattern, doc_QGLBuffer_usagePattern);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_setUsagePattern, "setUsagePattern(self, QGLBuffer.UsagePattern)");

extern "C" {static PyObject *meth_QGLBuffer_setUsagePattern(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_setUsagePattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGLBuffer::UsagePattern a0;
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGLBuffer, &sipCpp, sipType_QGLBuffer_UsagePattern, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUsagePattern(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_setUsagePattern, doc_QGLBuffer_setUsagePattern);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_create, "create(self) -> bool");

extern "C" {static PyObject *meth_QGLBuffer_create(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->create();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_create, doc_QGLBuffer_create);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_isCreated, "isCreated(self) -> bool");

extern "C" {static PyObject *meth_QGLBuffer_isCreated(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_isCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isCreated();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_isCreated, doc_QGLBuffer_isCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_destroy, "destroy(self)");

extern "C" {static PyObject *meth_QGLBuffer_destroy(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->destroy();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_destroy, doc_QGLBuffer_destroy);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_bind, "bind(self) -> bool");

extern "C" {static PyObject *meth_QGLBuffer_bind(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_bind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bind();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_bind, doc_QGLBuffer_bind);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_release, "release(self)\n"
"release(QGLBuffer.Type)");

extern "C" {static PyObject *meth_QGLBuffer_release(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->release();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::QGLBuffer::Type a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QGLBuffer_Type, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
             ::QGLBuffer::release(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_release, doc_QGLBuffer_release);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_bufferId, "bufferId(self) -> int");

extern "C" {static PyObject *meth_QGLBuffer_bufferId(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_bufferId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
             ::GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bufferId();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_bufferId, doc_QGLBuffer_bufferId);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_size, "size(self) -> int");

extern "C" {static PyObject *meth_QGLBuffer_size(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_size, doc_QGLBuffer_size);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_read, "read(self, int, sip.voidptr, int) -> bool");

extern "C" {static PyObject *meth_QGLBuffer_read(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        void* a1;
        int a2;
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bivi", &sipSelf, sipType_QGLBuffer, &sipCpp, &a0, &a1, &a2))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->read(a0,a1,a2);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_read, doc_QGLBuffer_read);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_write, "write(self, int, sip.voidptr, int)");

extern "C" {static PyObject *meth_QGLBuffer_write(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const void* a1;
        int a2;
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bivi", &sipSelf, sipType_QGLBuffer, &sipCpp, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->write(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_write, doc_QGLBuffer_write);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_allocate, "allocate(self, sip.voidptr, int)\n"
"allocate(self, int)");

extern "C" {static PyObject *meth_QGLBuffer_allocate(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_allocate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const void* a0;
        int a1;
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bvi", &sipSelf, sipType_QGLBuffer, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->allocate(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGLBuffer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->allocate(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_allocate, doc_QGLBuffer_allocate);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_map, "map(self, QGLBuffer.Access) -> sip.voidptr");

extern "C" {static PyObject *meth_QGLBuffer_map(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_map(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGLBuffer::Access a0;
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGLBuffer, &sipCpp, sipType_QGLBuffer_Access, &a0))
        {
            void*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->map(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_map, doc_QGLBuffer_map);

    return NULL;
}


PyDoc_STRVAR(doc_QGLBuffer_unmap, "unmap(self) -> bool");

extern "C" {static PyObject *meth_QGLBuffer_unmap(PyObject *, PyObject *);}
static PyObject *meth_QGLBuffer_unmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGLBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unmap();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLBuffer, sipName_unmap, doc_QGLBuffer_unmap);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLBuffer(void *, int);}
static void release_QGLBuffer(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::QGLBuffer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGLBuffer(void *, SIP_SSIZE_T, void *);}
static void assign_QGLBuffer(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QGLBuffer *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QGLBuffer *>(sipSrc);
}


extern "C" {static void *array_QGLBuffer(SIP_SSIZE_T);}
static void *array_QGLBuffer(SIP_SSIZE_T sipNrElem)
{
    return new  ::QGLBuffer[sipNrElem];
}


extern "C" {static void *copy_QGLBuffer(const void *, SIP_SSIZE_T);}
static void *copy_QGLBuffer(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QGLBuffer(reinterpret_cast<const  ::QGLBuffer *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGLBuffer(sipSimpleWrapper *);}
static void dealloc_QGLBuffer(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGLBuffer(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QGLBuffer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLBuffer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QGLBuffer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QGLBuffer();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
         ::QGLBuffer::Type a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QGLBuffer_Type, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QGLBuffer(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::QGLBuffer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGLBuffer, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::QGLBuffer(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QGLBuffer[] = {
    {SIP_MLNAME_CAST(sipName_allocate), meth_QGLBuffer_allocate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_allocate)},
    {SIP_MLNAME_CAST(sipName_bind), meth_QGLBuffer_bind, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_bind)},
    {SIP_MLNAME_CAST(sipName_bufferId), meth_QGLBuffer_bufferId, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_bufferId)},
    {SIP_MLNAME_CAST(sipName_create), meth_QGLBuffer_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_create)},
    {SIP_MLNAME_CAST(sipName_destroy), meth_QGLBuffer_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_destroy)},
    {SIP_MLNAME_CAST(sipName_isCreated), meth_QGLBuffer_isCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_isCreated)},
    {SIP_MLNAME_CAST(sipName_map), meth_QGLBuffer_map, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_map)},
    {SIP_MLNAME_CAST(sipName_read), meth_QGLBuffer_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_read)},
    {SIP_MLNAME_CAST(sipName_release), meth_QGLBuffer_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_release)},
    {SIP_MLNAME_CAST(sipName_setUsagePattern), meth_QGLBuffer_setUsagePattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_setUsagePattern)},
    {SIP_MLNAME_CAST(sipName_size), meth_QGLBuffer_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_size)},
    {SIP_MLNAME_CAST(sipName_type), meth_QGLBuffer_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_type)},
    {SIP_MLNAME_CAST(sipName_unmap), meth_QGLBuffer_unmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_unmap)},
    {SIP_MLNAME_CAST(sipName_usagePattern), meth_QGLBuffer_usagePattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_usagePattern)},
    {SIP_MLNAME_CAST(sipName_write), meth_QGLBuffer_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLBuffer_write)}
};

static sipEnumMemberDef enummembers_QGLBuffer[] = {
    {sipName_DynamicCopy, static_cast<int>( ::QGLBuffer::DynamicCopy), 6},
    {sipName_DynamicDraw, static_cast<int>( ::QGLBuffer::DynamicDraw), 6},
    {sipName_DynamicRead, static_cast<int>( ::QGLBuffer::DynamicRead), 6},
    {sipName_IndexBuffer, static_cast<int>( ::QGLBuffer::IndexBuffer), 5},
    {sipName_PixelPackBuffer, static_cast<int>( ::QGLBuffer::PixelPackBuffer), 5},
    {sipName_PixelUnpackBuffer, static_cast<int>( ::QGLBuffer::PixelUnpackBuffer), 5},
    {sipName_ReadOnly, static_cast<int>( ::QGLBuffer::ReadOnly), 4},
    {sipName_ReadWrite, static_cast<int>( ::QGLBuffer::ReadWrite), 4},
    {sipName_StaticCopy, static_cast<int>( ::QGLBuffer::StaticCopy), 6},
    {sipName_StaticDraw, static_cast<int>( ::QGLBuffer::StaticDraw), 6},
    {sipName_StaticRead, static_cast<int>( ::QGLBuffer::StaticRead), 6},
    {sipName_StreamCopy, static_cast<int>( ::QGLBuffer::StreamCopy), 6},
    {sipName_StreamDraw, static_cast<int>( ::QGLBuffer::StreamDraw), 6},
    {sipName_StreamRead, static_cast<int>( ::QGLBuffer::StreamRead), 6},
    {sipName_VertexBuffer, static_cast<int>( ::QGLBuffer::VertexBuffer), 5},
    {sipName_WriteOnly, static_cast<int>( ::QGLBuffer::WriteOnly), 4},
};

PyDoc_STRVAR(doc_QGLBuffer, "\1QGLBuffer()\n"
"QGLBuffer(QGLBuffer.Type)\n"
"QGLBuffer(QGLBuffer)");


static pyqt4ClassPluginDef plugin_QGLBuffer = {
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtOpenGL_QGLBuffer = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLBuffer,
        {0},
        &plugin_QGLBuffer
    },
    {
        sipNameNr_QGLBuffer,
        {0, 0, 1},
        15, methods_QGLBuffer,
        16, enummembers_QGLBuffer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLBuffer,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QGLBuffer,
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
    dealloc_QGLBuffer,
    assign_QGLBuffer,
    array_QGLBuffer,
    copy_QGLBuffer,
    release_QGLBuffer,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
