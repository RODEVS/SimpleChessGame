/*
 * Internal module API header file.
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

#ifndef _QtTestAPI_H
#define _QtTestAPI_H

#include <sip.h>

#include <QMetaType>
#include <QThread>

/* These are the qualifiers that are enabled. */
#define SIP_FEATURE_PyQt_Process
#define SIP_FEATURE_PyQt_NotBootstrapped
#define SIP_FEATURE_PyQt_Deprecated_5_0
#define SIP_FEATURE_PyQt_NoOpenGLES
#define SIP_FEATURE_PyQt_RawFont
#define SIP_FEATURE_PyQt_SystemTrayIcon
#define SIP_FEATURE_PyQt_PrintPreviewDialog
#define SIP_FEATURE_PyQt_PrintPreviewWidget
#define SIP_FEATURE_PyQt_Printer
#define SIP_FEATURE_PyQt_PrintDialog
#define SIP_FEATURE_Py_v3
#define SIP_FEATURE_PyQt_qreal_double
#define SIP_FEATURE_PyQt_SizeGrip
#define SIP_FEATURE_PyQt_OpenSSL
#define SIP_FEATURE_Py_DateTime
#define SIP_FEATURE_PyQt_NoQtPrintRangeBug
#define SIP_FEATURE_PyQt_WhatsThis
#define SIP_FEATURE_PyQt_ToolTip
#define SIP_FEATURE_PyQt_StatusTip
#define SIP_FEATURE_PyQt_SessionManager
#define SIP_FEATURE_PyQt_Accessibility
#define SIP_PLATFORM_WS_X11
#define SIP_TIMELINE_Qt_5_0_0


/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_qWaitForWindowExposed 0
#define sipName_qWaitForWindowExposed &sipStrings_QtTest[0]
#define sipNameNr_qWaitForWindowActive 22
#define sipName_qWaitForWindowActive &sipStrings_QtTest[22]
#define sipNameNr_qWaitForWindowShown 43
#define sipName_qWaitForWindowShown &sipStrings_QtTest[43]
#define sipNameNr_defaultButtonNumber 63
#define sipName_defaultButtonNumber &sipStrings_QtTest[63]
#define sipNameNr_QTest__MouseAction 83
#define sipName_QTest__MouseAction &sipStrings_QtTest[83]
#define sipNameNr_escapeButtonNumber 102
#define sipName_escapeButtonNumber &sipStrings_QtTest[102]
#define sipNameNr_QTest__KeyAction 121
#define sipName_QTest__KeyAction &sipStrings_QtTest[121]
#define sipNameNr_aspectRatioMode 138
#define sipName_aspectRatioMode &sipStrings_QtTest[138]
#define sipNameNr_deviceTransform 154
#define sipName_deviceTransform &sipStrings_QtTest[154]
#define sipNameNr_selectedFilter 170
#define sipName_selectedFilter &sipStrings_QtTest[170]
#define sipNameNr_disambiguation 185
#define sipName_disambiguation &sipStrings_QtTest[185]
#define sipNameNr_waitForEvents 200
#define sipName_waitForEvents &sipStrings_QtTest[200]
#define sipNameNr_transformMode 214
#define sipName_transformMode &sipStrings_QtTest[214]
#define sipNameNr_mouseRelease 228
#define sipName_mouseRelease &sipStrings_QtTest[228]
#define sipNameNr_MouseRelease 241
#define sipName_MouseRelease &sipStrings_QtTest[241]
#define sipNameNr_sourceRegion 254
#define sipName_sourceRegion &sipStrings_QtTest[254]
#define sipNameNr_targetOffset 267
#define sipName_targetOffset &sipStrings_QtTest[267]
#define sipNameNr_boundingRect 280
#define sipName_boundingRect &sipStrings_QtTest[280]
#define sipNameNr_midLineWidth 293
#define sipName_midLineWidth &sipStrings_QtTest[293]
#define sipNameNr_PyQt4_QtTest 306
#define sipName_PyQt4_QtTest &sipStrings_QtTest[306]
#define sipNameNr_mouseDClick 319
#define sipName_mouseDClick &sipStrings_QtTest[319]
#define sipNameNr_MouseDClick 331
#define sipName_MouseDClick &sipStrings_QtTest[331]
#define sipNameNr_MouseAction 90
#define sipName_MouseAction &sipStrings_QtTest[90]
#define sipNameNr_button2Text 343
#define sipName_button2Text &sipStrings_QtTest[343]
#define sipNameNr_button1Text 355
#define sipName_button1Text &sipStrings_QtTest[355]
#define sipNameNr_mousePress 367
#define sipName_mousePress &sipStrings_QtTest[367]
#define sipNameNr_mouseClick 378
#define sipName_mouseClick &sipStrings_QtTest[378]
#define sipNameNr_MouseClick 389
#define sipName_MouseClick &sipStrings_QtTest[389]
#define sipNameNr_MousePress 400
#define sipName_MousePress &sipStrings_QtTest[400]
#define sipNameNr_keyRelease 411
#define sipName_keyRelease &sipStrings_QtTest[411]
#define sipNameNr_mouseEvent 422
#define sipName_mouseEvent &sipStrings_QtTest[422]
#define sipNameNr_fieldwidth 433
#define sipName_fieldwidth &sipStrings_QtTest[433]
#define sipNameNr_fieldWidth 444
#define sipName_fieldWidth &sipStrings_QtTest[444]
#define sipNameNr_mouseMove 455
#define sipName_mouseMove &sipStrings_QtTest[455]
#define sipNameNr_keyClicks 465
#define sipName_keyClicks &sipStrings_QtTest[465]
#define sipNameNr_KeyAction 128
#define sipName_KeyAction &sipStrings_QtTest[128]
#define sipNameNr_operation 475
#define sipName_operation &sipStrings_QtTest[475]
#define sipNameNr_lineWidth 485
#define sipName_lineWidth &sipStrings_QtTest[485]
#define sipNameNr_directory 495
#define sipName_directory &sipStrings_QtTest[495]
#define sipNameNr_alignment 505
#define sipName_alignment &sipStrings_QtTest[505]
#define sipNameNr_MouseMove 515
#define sipName_MouseMove &sipStrings_QtTest[515]
#define sipNameNr_precision 525
#define sipName_precision &sipStrings_QtTest[525]
#define sipNameNr_keyPress 535
#define sipName_keyPress &sipStrings_QtTest[535]
#define sipNameNr_keyClick 544
#define sipName_keyClick &sipStrings_QtTest[544]
#define sipNameNr_modifier 553
#define sipName_modifier &sipStrings_QtTest[553]
#define sipNameNr_keyEvent 562
#define sipName_keyEvent &sipStrings_QtTest[562]
#define sipNameNr_fillRule 571
#define sipName_fillRule &sipStrings_QtTest[571]
#define sipNameNr_tabArray 580
#define sipName_tabArray &sipStrings_QtTest[580]
#define sipNameNr_tabStops 589
#define sipName_tabStops &sipStrings_QtTest[589]
#define sipNameNr_userData 598
#define sipName_userData &sipStrings_QtTest[598]
#define sipNameNr_shortcut 607
#define sipName_shortcut &sipStrings_QtTest[607]
#define sipNameNr_behavior 616
#define sipName_behavior &sipStrings_QtTest[616]
#define sipNameNr_position 625
#define sipName_position &sipStrings_QtTest[625]
#define sipNameNr_fillChar 634
#define sipName_fillChar &sipStrings_QtTest[634]
#define sipNameNr_encoding 643
#define sipName_encoding &sipStrings_QtTest[643]
#define sipNameNr_Release 233
#define sipName_Release &sipStrings_QtTest[233]
#define sipNameNr_exposed 652
#define sipName_exposed &sipStrings_QtTest[652]
#define sipNameNr_button2 660
#define sipName_button2 &sipStrings_QtTest[660]
#define sipNameNr_button1 668
#define sipName_button1 &sipStrings_QtTest[668]
#define sipNameNr_quality 676
#define sipName_quality &sipStrings_QtTest[676]
#define sipNameNr_yMargin 684
#define sipName_yMargin &sipStrings_QtTest[684]
#define sipNameNr_xMargin 692
#define sipName_xMargin &sipStrings_QtTest[692]
#define sipNameNr_caption 700
#define sipName_caption &sipStrings_QtTest[700]
#define sipNameNr_options 708
#define sipName_options &sipStrings_QtTest[708]
#define sipNameNr_timeout 716
#define sipName_timeout &sipStrings_QtTest[716]
#define sipNameNr_filters 724
#define sipName_filters &sipStrings_QtTest[724]
#define sipNameNr_qSleep 732
#define sipName_qSleep &sipStrings_QtTest[732]
#define sipNameNr_yRound 739
#define sipName_yRound &sipStrings_QtTest[739]
#define sipNameNr_xRound 746
#define sipName_xRound &sipStrings_QtTest[746]
#define sipNameNr_layers 753
#define sipName_layers &sipStrings_QtTest[753]
#define sipNameNr_sunken 760
#define sipName_sunken &sipStrings_QtTest[760]
#define sipNameNr_option 767
#define sipName_option &sipStrings_QtTest[767]
#define sipNameNr_proper 774
#define sipName_proper &sipStrings_QtTest[774]
#define sipNameNr_value9 781
#define sipName_value9 &sipStrings_QtTest[781]
#define sipNameNr_value8 788
#define sipName_value8 &sipStrings_QtTest[788]
#define sipNameNr_value7 795
#define sipName_value7 &sipStrings_QtTest[795]
#define sipNameNr_value6 802
#define sipName_value6 &sipStrings_QtTest[802]
#define sipNameNr_value5 809
#define sipName_value5 &sipStrings_QtTest[809]
#define sipNameNr_value4 816
#define sipName_value4 &sipStrings_QtTest[816]
#define sipNameNr_value3 823
#define sipName_value3 &sipStrings_QtTest[823]
#define sipNameNr_value2 830
#define sipName_value2 &sipStrings_QtTest[830]
#define sipNameNr_value1 837
#define sipName_value1 &sipStrings_QtTest[837]
#define sipNameNr_value0 844
#define sipName_value0 &sipStrings_QtTest[844]
#define sipNameNr_symbol 851
#define sipName_symbol &sipStrings_QtTest[851]
#define sipNameNr_suffix 858
#define sipName_suffix &sipStrings_QtTest[858]
#define sipNameNr_prefix 865
#define sipName_prefix &sipStrings_QtTest[865]
#define sipNameNr_format 872
#define sipName_format &sipStrings_QtTest[872]
#define sipNameNr_column 879
#define sipName_column &sipStrings_QtTest[879]
#define sipNameNr_filter 886
#define sipName_filter &sipStrings_QtTest[886]
#define sipNameNr_parent 893
#define sipName_parent &sipStrings_QtTest[893]
#define sipNameNr_qWait 900
#define sipName_qWait &sipStrings_QtTest[900]
#define sipNameNr_Click 325
#define sipName_Click &sipStrings_QtTest[325]
#define sipNameNr_Press 372
#define sipName_Press &sipStrings_QtTest[372]
#define sipNameNr_QTest 906
#define sipName_QTest &sipStrings_QtTest[906]
#define sipNameNr_brush 912
#define sipName_brush &sipStrings_QtTest[912]
#define sipNameNr_delay 918
#define sipName_delay &sipStrings_QtTest[918]
#define sipNameNr_order 924
#define sipName_order &sipStrings_QtTest[924]
#define sipNameNr_flags 930
#define sipName_flags &sipStrings_QtTest[930]
#define sipNameNr_msecs 936
#define sipName_msecs &sipStrings_QtTest[936]
#define sipNameNr_state 942
#define sipName_state &sipStrings_QtTest[942]
#define sipNameNr_mode 948
#define sipName_mode &sipStrings_QtTest[948]
#define sipNameNr_name 953
#define sipName_name &sipStrings_QtTest[953]
#define sipNameNr_base 958
#define sipName_base &sipStrings_QtTest[958]
#define sipNameNr_fill 963
#define sipName_fill &sipStrings_QtTest[963]
#define sipNameNr_from 968
#define sipName_from &sipStrings_QtTest[968]
#define sipNameNr_sort 973
#define sipName_sort &sipStrings_QtTest[973]
#define sipNameNr_pen 978
#define sipName_pen &sipStrings_QtTest[978]
#define sipNameNr_end 982
#define sipName_end &sipStrings_QtTest[982]
#define sipNameNr_pos 986
#define sipName_pos &sipStrings_QtTest[986]
#define sipNameNr_sw 990
#define sipName_sw &sipStrings_QtTest[990]
#define sipNameNr_sy 993
#define sipName_sy &sipStrings_QtTest[993]
#define sipNameNr_sx 996
#define sipName_sx &sipStrings_QtTest[996]
#define sipNameNr_sh 915
#define sipName_sh &sipStrings_QtTest[915]
#define sipNameNr_cs 939
#define sipName_cs &sipStrings_QtTest[939]
#define sipNameNr_at 876
#define sipName_at &sipStrings_QtTest[876]

#define sipMalloc                   sipAPI_QtTest->api_malloc
#define sipFree                     sipAPI_QtTest->api_free
#define sipBuildResult              sipAPI_QtTest->api_build_result
#define sipCallMethod               sipAPI_QtTest->api_call_method
#define sipCallProcedureMethod      sipAPI_QtTest->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_QtTest->api_call_error_handler
#define sipParseResultEx            sipAPI_QtTest->api_parse_result_ex
#define sipParseResult              sipAPI_QtTest->api_parse_result
#define sipParseArgs                sipAPI_QtTest->api_parse_args
#define sipParseKwdArgs             sipAPI_QtTest->api_parse_kwd_args
#define sipParsePair                sipAPI_QtTest->api_parse_pair
#define sipInstanceDestroyed        sipAPI_QtTest->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI_QtTest->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI_QtTest->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_QtTest->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_QtTest->api_convert_to_void_ptr
#define sipAddException             sipAPI_QtTest->api_add_exception
#define sipNoFunction               sipAPI_QtTest->api_no_function
#define sipNoMethod                 sipAPI_QtTest->api_no_method
#define sipAbstractMethod           sipAPI_QtTest->api_abstract_method
#define sipBadClass                 sipAPI_QtTest->api_bad_class
#define sipBadCatcherResult         sipAPI_QtTest->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_QtTest->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_QtTest->api_bad_operator_arg
#define sipTrace                    sipAPI_QtTest->api_trace
#define sipTransferBack             sipAPI_QtTest->api_transfer_back
#define sipTransferTo               sipAPI_QtTest->api_transfer_to
#define sipTransferBreak            sipAPI_QtTest->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_QtTest->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_QtTest->api_wrapper_type
#define sipWrapperType_Type         sipAPI_QtTest->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_QtTest->api_voidptr_type
#define sipGetPyObject              sipAPI_QtTest->api_get_pyobject
#define sipGetAddress               sipAPI_QtTest->api_get_address
#define sipGetMixinAddress          sipAPI_QtTest->api_get_mixin_address
#define sipGetCppPtr                sipAPI_QtTest->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_QtTest->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_QtTest->api_is_py_method
#define sipCallHook                 sipAPI_QtTest->api_call_hook
#define sipEndThread                sipAPI_QtTest->api_end_thread
#define sipConnectRx                sipAPI_QtTest->api_connect_rx
#define sipDisconnectRx             sipAPI_QtTest->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_QtTest->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_QtTest->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_QtTest->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_QtTest->api_add_type_instance
#define sipFreeSipslot              sipAPI_QtTest->api_free_sipslot
#define sipSameSlot                 sipAPI_QtTest->api_same_slot
#define sipPySlotExtend             sipAPI_QtTest->api_pyslot_extend
#define sipConvertRx                sipAPI_QtTest->api_convert_rx
#define sipAddDelayedDtor           sipAPI_QtTest->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_QtTest->api_can_convert_to_type
#define sipConvertToType            sipAPI_QtTest->api_convert_to_type
#define sipForceConvertToType       sipAPI_QtTest->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_QtTest->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_QtTest->api_convert_to_enum
#define sipConvertToBool            sipAPI_QtTest->api_convert_to_bool
#define sipReleaseType              sipAPI_QtTest->api_release_type
#define sipConvertFromType          sipAPI_QtTest->api_convert_from_type
#define sipConvertFromNewType       sipAPI_QtTest->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_QtTest->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_QtTest->api_convert_from_enum
#define sipGetState                 sipAPI_QtTest->api_get_state
#define sipExportSymbol             sipAPI_QtTest->api_export_symbol
#define sipImportSymbol             sipAPI_QtTest->api_import_symbol
#define sipFindType                 sipAPI_QtTest->api_find_type
#define sipFindNamedEnum            sipAPI_QtTest->api_find_named_enum
#define sipBytes_AsChar             sipAPI_QtTest->api_bytes_as_char
#define sipBytes_AsString           sipAPI_QtTest->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_QtTest->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_QtTest->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_QtTest->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_QtTest->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_QtTest->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_QtTest->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_QtTest->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_QtTest->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_QtTest->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_QtTest->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_QtTest->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_QtTest->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_QtTest->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_QtTest->api_save_slot
#define sipClearAnySlotReference    sipAPI_QtTest->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_QtTest->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_QtTest->api_deprecated
#define sipGetReference             sipAPI_QtTest->api_get_reference
#define sipKeepReference            sipAPI_QtTest->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_QtTest->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_QtTest->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_QtTest->api_type_from_py_type_object
#define sipTypeScope                sipAPI_QtTest->api_type_scope
#define sipResolveTypedef           sipAPI_QtTest->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_QtTest->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_QtTest->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_QtTest->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_QtTest->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_QtTest->api_enable_overflow_checking
#define sipInitMixin                sipAPI_QtTest->api_init_mixin
#define sipExportModule             sipAPI_QtTest->api_export_module
#define sipInitModule               sipAPI_QtTest->api_init_module
#define sipGetInterpreter           sipAPI_QtTest->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_QtTest->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_QtTest->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_QtTest->api_get_type_user_data
#define sipPyTypeDict               sipAPI_QtTest->api_py_type_dict
#define sipPyTypeName               sipAPI_QtTest->api_py_type_name
#define sipGetCFunction             sipAPI_QtTest->api_get_c_function
#define sipGetMethod                sipAPI_QtTest->api_get_method
#define sipFromMethod               sipAPI_QtTest->api_from_method
#define sipGetDate                  sipAPI_QtTest->api_get_date
#define sipFromDate                 sipAPI_QtTest->api_from_date
#define sipGetDateTime              sipAPI_QtTest->api_get_datetime
#define sipFromDateTime             sipAPI_QtTest->api_from_datetime
#define sipGetTime                  sipAPI_QtTest->api_get_time
#define sipFromTime                 sipAPI_QtTest->api_from_time
#define sipIsUserType               sipAPI_QtTest->api_is_user_type
#define sipGetFrame                 sipAPI_QtTest->api_get_frame
#define sipCheckPluginForType       sipAPI_QtTest->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_QtTest->api_unicode_new
#define sipUnicodeWrite             sipAPI_QtTest->api_unicode_write
#define sipUnicodeData              sipAPI_QtTest->api_unicode_data
#define sipGetBufferInfo            sipAPI_QtTest->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_QtTest->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_QtTest->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_QtTest->api_is_derived_class
#define sipGetUserObject            sipAPI_QtTest->api_get_user_object
#define sipSetUserObject            sipAPI_QtTest->api_set_user_object
#define sipRegisterEventHandler     sipAPI_QtTest->api_register_event_handler
#define sipLong_AsChar              sipAPI_QtTest->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_QtTest->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_QtTest->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_QtTest->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_QtTest->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_QtTest->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_QtTest->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_QtTest->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_QtTest->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_QtTest->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_QtTest->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_QtTest->api_map_string_to_class
#define sipMapIntToClass            sipAPI_QtTest->api_map_int_to_class
#define sipFindClass                sipAPI_QtTest->api_find_class
#define sipFindMappedType           sipAPI_QtTest->api_find_mapped_type
#define sipConvertToArray           sipAPI_QtTest->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_QtTest->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_QtTest->api_enable_gc
#define sipPrintObject              sipAPI_QtTest->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_QtTest->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings_QtTest[];

#define sipType_QTest sipExportedTypes_QtTest[0]
#define sipClass_QTest sipExportedTypes_QtTest[0]->u.td_wrapper_type

#define sipType_QTest_MouseAction sipExportedTypes_QtTest[2]
#define sipEnum_QTest_MouseAction sipExportedTypes_QtTest[2]->u.td_py_type

#define sipType_QTest_KeyAction sipExportedTypes_QtTest[1]
#define sipEnum_QTest_KeyAction sipExportedTypes_QtTest[1]->u.td_py_type

extern sipClassTypeDef sipTypeDef_QtTest_QTest;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_QtTest;
extern sipExportedModuleDef sipModuleAPI_QtTest;
extern sipTypeDef *sipExportedTypes_QtTest[];

#define sipType_Qt_Key sipImportedTypes_QtTest_QtCore[2].it_td
#define sipEnum_Qt_Key sipImportedTypes_QtTest_QtCore[2].it_td->u.td_py_type

#define sipType_Qt_MouseButton sipImportedTypes_QtTest_QtCore[4].it_td
#define sipEnum_Qt_MouseButton sipImportedTypes_QtTest_QtCore[4].it_td->u.td_py_type

#define sipType_Qt_KeyboardModifiers sipImportedTypes_QtTest_QtCore[3].it_td
#define sipClass_Qt_KeyboardModifiers sipImportedTypes_QtTest_QtCore[3].it_td->u.td_wrapper_type

#define sipType_QPoint sipImportedTypes_QtTest_QtCore[0].it_td
#define sipClass_QPoint sipImportedTypes_QtTest_QtCore[0].it_td->u.td_wrapper_type

#define sipType_QString sipImportedTypes_QtTest_QtCore[1].it_td
extern sipImportedTypeDef sipImportedTypes_QtTest_QtCore[];

#define sipType_QWidget sipImportedTypes_QtTest_QtGui[0].it_td
#define sipClass_QWidget sipImportedTypes_QtTest_QtGui[0].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes_QtTest_QtGui[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_QtTest_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_QtTest_qt_metacall;

typedef int (*sip_qt_metacast_func)(sipSimpleWrapper *, sipTypeDef *, const char *);
extern sip_qt_metacast_func sip_QtTest_qt_metacast;

#endif
