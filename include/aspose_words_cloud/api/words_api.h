/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="words_api.h">
*   Copyright (c) 2026 Aspose.Words for Cloud
* </copyright>
* <summary>
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
* 
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
* 
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
* </summary> 
-------------------------------------------------------------------------------------------------------------------- **/

#pragma once
#include <vector>
#include "aspose_words_cloud/common.h"
#include "aspose_words_cloud/api_client.h"
#include "aspose_words_cloud/job_handler.h"
#include "aspose_words_cloud/requests/batch_request.h"
#include "aspose_words_cloud/responses/batch_response.h"
#include "aspose_words_cloud/requests/accept_all_revisions_request.h"
#include "aspose_words_cloud/responses/accept_all_revisions_response.h"
#include "aspose_words_cloud/requests/accept_all_revisions_online_request.h"
#include "aspose_words_cloud/responses/accept_all_revisions_online_response.h"
#include "aspose_words_cloud/requests/append_document_request.h"
#include "aspose_words_cloud/responses/append_document_response.h"
#include "aspose_words_cloud/requests/append_document_job_request.h"
#include "aspose_words_cloud/responses/append_document_job_response.h"
#include "aspose_words_cloud/requests/append_document_online_request.h"
#include "aspose_words_cloud/responses/append_document_online_response.h"
#include "aspose_words_cloud/requests/append_document_online_job_request.h"
#include "aspose_words_cloud/responses/append_document_online_job_response.h"
#include "aspose_words_cloud/requests/apply_style_to_document_element_request.h"
#include "aspose_words_cloud/responses/apply_style_to_document_element_response.h"
#include "aspose_words_cloud/requests/apply_style_to_document_element_online_request.h"
#include "aspose_words_cloud/responses/apply_style_to_document_element_online_response.h"
#include "aspose_words_cloud/requests/build_report_request.h"
#include "aspose_words_cloud/responses/build_report_response.h"
#include "aspose_words_cloud/requests/build_report_online_request.h"
#include "aspose_words_cloud/responses/build_report_online_response.h"
#include "aspose_words_cloud/requests/compare_document_request.h"
#include "aspose_words_cloud/responses/compare_document_response.h"
#include "aspose_words_cloud/requests/compare_document_online_request.h"
#include "aspose_words_cloud/responses/compare_document_online_response.h"
#include "aspose_words_cloud/requests/compress_document_request.h"
#include "aspose_words_cloud/responses/compress_document_response.h"
#include "aspose_words_cloud/requests/compress_document_online_request.h"
#include "aspose_words_cloud/responses/compress_document_online_response.h"
#include "aspose_words_cloud/requests/convert_document_request.h"
#include "aspose_words_cloud/responses/convert_document_response.h"
#include "aspose_words_cloud/requests/convert_document_job_request.h"
#include "aspose_words_cloud/responses/convert_document_job_response.h"
#include "aspose_words_cloud/requests/copy_file_request.h"
#include "aspose_words_cloud/responses/copy_file_response.h"
#include "aspose_words_cloud/requests/copy_folder_request.h"
#include "aspose_words_cloud/responses/copy_folder_response.h"
#include "aspose_words_cloud/requests/copy_style_request.h"
#include "aspose_words_cloud/responses/copy_style_response.h"
#include "aspose_words_cloud/requests/copy_style_online_request.h"
#include "aspose_words_cloud/responses/copy_style_online_response.h"
#include "aspose_words_cloud/requests/copy_styles_from_template_request.h"
#include "aspose_words_cloud/responses/copy_styles_from_template_response.h"
#include "aspose_words_cloud/requests/create_document_request.h"
#include "aspose_words_cloud/responses/create_document_response.h"
#include "aspose_words_cloud/requests/create_folder_request.h"
#include "aspose_words_cloud/responses/create_folder_response.h"
#include "aspose_words_cloud/requests/create_or_update_document_property_request.h"
#include "aspose_words_cloud/responses/create_or_update_document_property_response.h"
#include "aspose_words_cloud/requests/create_or_update_document_property_online_request.h"
#include "aspose_words_cloud/responses/create_or_update_document_property_online_response.h"
#include "aspose_words_cloud/requests/delete_all_paragraph_tab_stops_request.h"
#include "aspose_words_cloud/responses/delete_all_paragraph_tab_stops_response.h"
#include "aspose_words_cloud/requests/delete_all_paragraph_tab_stops_online_request.h"
#include "aspose_words_cloud/responses/delete_all_paragraph_tab_stops_online_response.h"
#include "aspose_words_cloud/requests/delete_bookmark_request.h"
#include "aspose_words_cloud/responses/delete_bookmark_response.h"
#include "aspose_words_cloud/requests/delete_bookmark_online_request.h"
#include "aspose_words_cloud/responses/delete_bookmark_online_response.h"
#include "aspose_words_cloud/requests/delete_bookmarks_request.h"
#include "aspose_words_cloud/responses/delete_bookmarks_response.h"
#include "aspose_words_cloud/requests/delete_bookmarks_online_request.h"
#include "aspose_words_cloud/responses/delete_bookmarks_online_response.h"
#include "aspose_words_cloud/requests/delete_border_request.h"
#include "aspose_words_cloud/responses/delete_border_response.h"
#include "aspose_words_cloud/requests/delete_border_online_request.h"
#include "aspose_words_cloud/responses/delete_border_online_response.h"
#include "aspose_words_cloud/requests/delete_borders_request.h"
#include "aspose_words_cloud/responses/delete_borders_response.h"
#include "aspose_words_cloud/requests/delete_borders_online_request.h"
#include "aspose_words_cloud/responses/delete_borders_online_response.h"
#include "aspose_words_cloud/requests/delete_comment_request.h"
#include "aspose_words_cloud/responses/delete_comment_response.h"
#include "aspose_words_cloud/requests/delete_comment_online_request.h"
#include "aspose_words_cloud/responses/delete_comment_online_response.h"
#include "aspose_words_cloud/requests/delete_comments_request.h"
#include "aspose_words_cloud/responses/delete_comments_response.h"
#include "aspose_words_cloud/requests/delete_comments_online_request.h"
#include "aspose_words_cloud/responses/delete_comments_online_response.h"
#include "aspose_words_cloud/requests/delete_custom_xml_part_request.h"
#include "aspose_words_cloud/responses/delete_custom_xml_part_response.h"
#include "aspose_words_cloud/requests/delete_custom_xml_part_online_request.h"
#include "aspose_words_cloud/responses/delete_custom_xml_part_online_response.h"
#include "aspose_words_cloud/requests/delete_custom_xml_parts_request.h"
#include "aspose_words_cloud/responses/delete_custom_xml_parts_response.h"
#include "aspose_words_cloud/requests/delete_custom_xml_parts_online_request.h"
#include "aspose_words_cloud/responses/delete_custom_xml_parts_online_response.h"
#include "aspose_words_cloud/requests/delete_document_property_request.h"
#include "aspose_words_cloud/responses/delete_document_property_response.h"
#include "aspose_words_cloud/requests/delete_document_property_online_request.h"
#include "aspose_words_cloud/responses/delete_document_property_online_response.h"
#include "aspose_words_cloud/requests/delete_drawing_object_request.h"
#include "aspose_words_cloud/responses/delete_drawing_object_response.h"
#include "aspose_words_cloud/requests/delete_drawing_object_online_request.h"
#include "aspose_words_cloud/responses/delete_drawing_object_online_response.h"
#include "aspose_words_cloud/requests/delete_field_request.h"
#include "aspose_words_cloud/responses/delete_field_response.h"
#include "aspose_words_cloud/requests/delete_field_online_request.h"
#include "aspose_words_cloud/responses/delete_field_online_response.h"
#include "aspose_words_cloud/requests/delete_fields_request.h"
#include "aspose_words_cloud/responses/delete_fields_response.h"
#include "aspose_words_cloud/requests/delete_fields_online_request.h"
#include "aspose_words_cloud/responses/delete_fields_online_response.h"
#include "aspose_words_cloud/requests/delete_file_request.h"
#include "aspose_words_cloud/responses/delete_file_response.h"
#include "aspose_words_cloud/requests/delete_folder_request.h"
#include "aspose_words_cloud/responses/delete_folder_response.h"
#include "aspose_words_cloud/requests/delete_footnote_request.h"
#include "aspose_words_cloud/responses/delete_footnote_response.h"
#include "aspose_words_cloud/requests/delete_footnote_online_request.h"
#include "aspose_words_cloud/responses/delete_footnote_online_response.h"
#include "aspose_words_cloud/requests/delete_form_field_request.h"
#include "aspose_words_cloud/responses/delete_form_field_response.h"
#include "aspose_words_cloud/requests/delete_form_field_online_request.h"
#include "aspose_words_cloud/responses/delete_form_field_online_response.h"
#include "aspose_words_cloud/requests/delete_header_footer_request.h"
#include "aspose_words_cloud/responses/delete_header_footer_response.h"
#include "aspose_words_cloud/requests/delete_header_footer_online_request.h"
#include "aspose_words_cloud/responses/delete_header_footer_online_response.h"
#include "aspose_words_cloud/requests/delete_headers_footers_request.h"
#include "aspose_words_cloud/responses/delete_headers_footers_response.h"
#include "aspose_words_cloud/requests/delete_headers_footers_online_request.h"
#include "aspose_words_cloud/responses/delete_headers_footers_online_response.h"
#include "aspose_words_cloud/requests/delete_macros_request.h"
#include "aspose_words_cloud/responses/delete_macros_response.h"
#include "aspose_words_cloud/requests/delete_macros_online_request.h"
#include "aspose_words_cloud/responses/delete_macros_online_response.h"
#include "aspose_words_cloud/requests/delete_office_math_object_request.h"
#include "aspose_words_cloud/responses/delete_office_math_object_response.h"
#include "aspose_words_cloud/requests/delete_office_math_object_online_request.h"
#include "aspose_words_cloud/responses/delete_office_math_object_online_response.h"
#include "aspose_words_cloud/requests/delete_office_math_objects_request.h"
#include "aspose_words_cloud/responses/delete_office_math_objects_response.h"
#include "aspose_words_cloud/requests/delete_office_math_objects_online_request.h"
#include "aspose_words_cloud/responses/delete_office_math_objects_online_response.h"
#include "aspose_words_cloud/requests/delete_paragraph_request.h"
#include "aspose_words_cloud/responses/delete_paragraph_response.h"
#include "aspose_words_cloud/requests/delete_paragraph_list_format_request.h"
#include "aspose_words_cloud/responses/delete_paragraph_list_format_response.h"
#include "aspose_words_cloud/requests/delete_paragraph_list_format_online_request.h"
#include "aspose_words_cloud/responses/delete_paragraph_list_format_online_response.h"
#include "aspose_words_cloud/requests/delete_paragraph_online_request.h"
#include "aspose_words_cloud/responses/delete_paragraph_online_response.h"
#include "aspose_words_cloud/requests/delete_paragraph_tab_stop_request.h"
#include "aspose_words_cloud/responses/delete_paragraph_tab_stop_response.h"
#include "aspose_words_cloud/requests/delete_paragraph_tab_stop_online_request.h"
#include "aspose_words_cloud/responses/delete_paragraph_tab_stop_online_response.h"
#include "aspose_words_cloud/requests/delete_run_request.h"
#include "aspose_words_cloud/responses/delete_run_response.h"
#include "aspose_words_cloud/requests/delete_run_online_request.h"
#include "aspose_words_cloud/responses/delete_run_online_response.h"
#include "aspose_words_cloud/requests/delete_section_request.h"
#include "aspose_words_cloud/responses/delete_section_response.h"
#include "aspose_words_cloud/requests/delete_section_online_request.h"
#include "aspose_words_cloud/responses/delete_section_online_response.h"
#include "aspose_words_cloud/requests/delete_structured_document_tag_request.h"
#include "aspose_words_cloud/responses/delete_structured_document_tag_response.h"
#include "aspose_words_cloud/requests/delete_structured_document_tag_online_request.h"
#include "aspose_words_cloud/responses/delete_structured_document_tag_online_response.h"
#include "aspose_words_cloud/requests/delete_table_request.h"
#include "aspose_words_cloud/responses/delete_table_response.h"
#include "aspose_words_cloud/requests/delete_table_cell_request.h"
#include "aspose_words_cloud/responses/delete_table_cell_response.h"
#include "aspose_words_cloud/requests/delete_table_cell_online_request.h"
#include "aspose_words_cloud/responses/delete_table_cell_online_response.h"
#include "aspose_words_cloud/requests/delete_table_online_request.h"
#include "aspose_words_cloud/responses/delete_table_online_response.h"
#include "aspose_words_cloud/requests/delete_table_row_request.h"
#include "aspose_words_cloud/responses/delete_table_row_response.h"
#include "aspose_words_cloud/requests/delete_table_row_online_request.h"
#include "aspose_words_cloud/responses/delete_table_row_online_response.h"
#include "aspose_words_cloud/requests/delete_watermark_request.h"
#include "aspose_words_cloud/responses/delete_watermark_response.h"
#include "aspose_words_cloud/requests/delete_watermark_online_request.h"
#include "aspose_words_cloud/responses/delete_watermark_online_response.h"
#include "aspose_words_cloud/requests/download_file_request.h"
#include "aspose_words_cloud/responses/download_file_response.h"
#include "aspose_words_cloud/requests/execute_mail_merge_request.h"
#include "aspose_words_cloud/responses/execute_mail_merge_response.h"
#include "aspose_words_cloud/requests/execute_mail_merge_job_request.h"
#include "aspose_words_cloud/responses/execute_mail_merge_job_response.h"
#include "aspose_words_cloud/requests/execute_mail_merge_online_request.h"
#include "aspose_words_cloud/responses/execute_mail_merge_online_response.h"
#include "aspose_words_cloud/requests/execute_mail_merge_online_job_request.h"
#include "aspose_words_cloud/responses/execute_mail_merge_online_job_response.h"
#include "aspose_words_cloud/requests/get_all_revisions_request.h"
#include "aspose_words_cloud/responses/get_all_revisions_response.h"
#include "aspose_words_cloud/requests/get_all_revisions_online_request.h"
#include "aspose_words_cloud/responses/get_all_revisions_online_response.h"
#include "aspose_words_cloud/requests/get_available_fonts_request.h"
#include "aspose_words_cloud/responses/get_available_fonts_response.h"
#include "aspose_words_cloud/requests/get_bookmark_by_name_request.h"
#include "aspose_words_cloud/responses/get_bookmark_by_name_response.h"
#include "aspose_words_cloud/requests/get_bookmark_by_name_online_request.h"
#include "aspose_words_cloud/responses/get_bookmark_by_name_online_response.h"
#include "aspose_words_cloud/requests/get_bookmarks_request.h"
#include "aspose_words_cloud/responses/get_bookmarks_response.h"
#include "aspose_words_cloud/requests/get_bookmarks_online_request.h"
#include "aspose_words_cloud/responses/get_bookmarks_online_response.h"
#include "aspose_words_cloud/requests/get_border_request.h"
#include "aspose_words_cloud/responses/get_border_response.h"
#include "aspose_words_cloud/requests/get_border_online_request.h"
#include "aspose_words_cloud/responses/get_border_online_response.h"
#include "aspose_words_cloud/requests/get_borders_request.h"
#include "aspose_words_cloud/responses/get_borders_response.h"
#include "aspose_words_cloud/requests/get_borders_online_request.h"
#include "aspose_words_cloud/responses/get_borders_online_response.h"
#include "aspose_words_cloud/requests/get_comment_request.h"
#include "aspose_words_cloud/responses/get_comment_response.h"
#include "aspose_words_cloud/requests/get_comment_online_request.h"
#include "aspose_words_cloud/responses/get_comment_online_response.h"
#include "aspose_words_cloud/requests/get_comments_request.h"
#include "aspose_words_cloud/responses/get_comments_response.h"
#include "aspose_words_cloud/requests/get_comments_online_request.h"
#include "aspose_words_cloud/responses/get_comments_online_response.h"
#include "aspose_words_cloud/requests/get_custom_xml_part_request.h"
#include "aspose_words_cloud/responses/get_custom_xml_part_response.h"
#include "aspose_words_cloud/requests/get_custom_xml_part_online_request.h"
#include "aspose_words_cloud/responses/get_custom_xml_part_online_response.h"
#include "aspose_words_cloud/requests/get_custom_xml_parts_request.h"
#include "aspose_words_cloud/responses/get_custom_xml_parts_response.h"
#include "aspose_words_cloud/requests/get_custom_xml_parts_online_request.h"
#include "aspose_words_cloud/responses/get_custom_xml_parts_online_response.h"
#include "aspose_words_cloud/requests/get_document_request.h"
#include "aspose_words_cloud/responses/get_document_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_object_by_index_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_object_by_index_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_object_by_index_online_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_object_by_index_online_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_object_image_data_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_object_image_data_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_object_image_data_online_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_object_image_data_online_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_object_ole_data_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_object_ole_data_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_object_ole_data_online_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_object_ole_data_online_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_objects_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_objects_response.h"
#include "aspose_words_cloud/requests/get_document_drawing_objects_online_request.h"
#include "aspose_words_cloud/responses/get_document_drawing_objects_online_response.h"
#include "aspose_words_cloud/requests/get_document_field_names_request.h"
#include "aspose_words_cloud/responses/get_document_field_names_response.h"
#include "aspose_words_cloud/requests/get_document_field_names_online_request.h"
#include "aspose_words_cloud/responses/get_document_field_names_online_response.h"
#include "aspose_words_cloud/requests/get_document_hyperlink_by_index_request.h"
#include "aspose_words_cloud/responses/get_document_hyperlink_by_index_response.h"
#include "aspose_words_cloud/requests/get_document_hyperlink_by_index_online_request.h"
#include "aspose_words_cloud/responses/get_document_hyperlink_by_index_online_response.h"
#include "aspose_words_cloud/requests/get_document_hyperlinks_request.h"
#include "aspose_words_cloud/responses/get_document_hyperlinks_response.h"
#include "aspose_words_cloud/requests/get_document_hyperlinks_online_request.h"
#include "aspose_words_cloud/responses/get_document_hyperlinks_online_response.h"
#include "aspose_words_cloud/requests/get_document_properties_request.h"
#include "aspose_words_cloud/responses/get_document_properties_response.h"
#include "aspose_words_cloud/requests/get_document_properties_online_request.h"
#include "aspose_words_cloud/responses/get_document_properties_online_response.h"
#include "aspose_words_cloud/requests/get_document_property_request.h"
#include "aspose_words_cloud/responses/get_document_property_response.h"
#include "aspose_words_cloud/requests/get_document_property_online_request.h"
#include "aspose_words_cloud/responses/get_document_property_online_response.h"
#include "aspose_words_cloud/requests/get_document_protection_request.h"
#include "aspose_words_cloud/responses/get_document_protection_response.h"
#include "aspose_words_cloud/requests/get_document_protection_online_request.h"
#include "aspose_words_cloud/responses/get_document_protection_online_response.h"
#include "aspose_words_cloud/requests/get_document_statistics_request.h"
#include "aspose_words_cloud/responses/get_document_statistics_response.h"
#include "aspose_words_cloud/requests/get_document_statistics_online_request.h"
#include "aspose_words_cloud/responses/get_document_statistics_online_response.h"
#include "aspose_words_cloud/requests/get_document_with_format_request.h"
#include "aspose_words_cloud/responses/get_document_with_format_response.h"
#include "aspose_words_cloud/requests/get_field_request.h"
#include "aspose_words_cloud/responses/get_field_response.h"
#include "aspose_words_cloud/requests/get_field_online_request.h"
#include "aspose_words_cloud/responses/get_field_online_response.h"
#include "aspose_words_cloud/requests/get_fields_request.h"
#include "aspose_words_cloud/responses/get_fields_response.h"
#include "aspose_words_cloud/requests/get_fields_online_request.h"
#include "aspose_words_cloud/responses/get_fields_online_response.h"
#include "aspose_words_cloud/requests/get_files_list_request.h"
#include "aspose_words_cloud/responses/get_files_list_response.h"
#include "aspose_words_cloud/requests/get_footnote_request.h"
#include "aspose_words_cloud/responses/get_footnote_response.h"
#include "aspose_words_cloud/requests/get_footnote_online_request.h"
#include "aspose_words_cloud/responses/get_footnote_online_response.h"
#include "aspose_words_cloud/requests/get_footnotes_request.h"
#include "aspose_words_cloud/responses/get_footnotes_response.h"
#include "aspose_words_cloud/requests/get_footnotes_online_request.h"
#include "aspose_words_cloud/responses/get_footnotes_online_response.h"
#include "aspose_words_cloud/requests/get_form_field_request.h"
#include "aspose_words_cloud/responses/get_form_field_response.h"
#include "aspose_words_cloud/requests/get_form_field_online_request.h"
#include "aspose_words_cloud/responses/get_form_field_online_response.h"
#include "aspose_words_cloud/requests/get_form_fields_request.h"
#include "aspose_words_cloud/responses/get_form_fields_response.h"
#include "aspose_words_cloud/requests/get_form_fields_online_request.h"
#include "aspose_words_cloud/responses/get_form_fields_online_response.h"
#include "aspose_words_cloud/requests/get_header_footer_request.h"
#include "aspose_words_cloud/responses/get_header_footer_response.h"
#include "aspose_words_cloud/requests/get_header_footer_of_section_request.h"
#include "aspose_words_cloud/responses/get_header_footer_of_section_response.h"
#include "aspose_words_cloud/requests/get_header_footer_of_section_online_request.h"
#include "aspose_words_cloud/responses/get_header_footer_of_section_online_response.h"
#include "aspose_words_cloud/requests/get_header_footer_online_request.h"
#include "aspose_words_cloud/responses/get_header_footer_online_response.h"
#include "aspose_words_cloud/requests/get_header_footers_request.h"
#include "aspose_words_cloud/responses/get_header_footers_response.h"
#include "aspose_words_cloud/requests/get_header_footers_online_request.h"
#include "aspose_words_cloud/responses/get_header_footers_online_response.h"
#include "aspose_words_cloud/requests/get_info_request.h"
#include "aspose_words_cloud/responses/get_info_response.h"
#include "aspose_words_cloud/requests/get_list_request.h"
#include "aspose_words_cloud/responses/get_list_response.h"
#include "aspose_words_cloud/requests/get_list_online_request.h"
#include "aspose_words_cloud/responses/get_list_online_response.h"
#include "aspose_words_cloud/requests/get_lists_request.h"
#include "aspose_words_cloud/responses/get_lists_response.h"
#include "aspose_words_cloud/requests/get_lists_online_request.h"
#include "aspose_words_cloud/responses/get_lists_online_response.h"
#include "aspose_words_cloud/requests/get_office_math_object_request.h"
#include "aspose_words_cloud/responses/get_office_math_object_response.h"
#include "aspose_words_cloud/requests/get_office_math_object_online_request.h"
#include "aspose_words_cloud/responses/get_office_math_object_online_response.h"
#include "aspose_words_cloud/requests/get_office_math_objects_request.h"
#include "aspose_words_cloud/responses/get_office_math_objects_response.h"
#include "aspose_words_cloud/requests/get_office_math_objects_online_request.h"
#include "aspose_words_cloud/responses/get_office_math_objects_online_response.h"
#include "aspose_words_cloud/requests/get_paragraph_request.h"
#include "aspose_words_cloud/responses/get_paragraph_response.h"
#include "aspose_words_cloud/requests/get_paragraph_format_request.h"
#include "aspose_words_cloud/responses/get_paragraph_format_response.h"
#include "aspose_words_cloud/requests/get_paragraph_format_online_request.h"
#include "aspose_words_cloud/responses/get_paragraph_format_online_response.h"
#include "aspose_words_cloud/requests/get_paragraph_list_format_request.h"
#include "aspose_words_cloud/responses/get_paragraph_list_format_response.h"
#include "aspose_words_cloud/requests/get_paragraph_list_format_online_request.h"
#include "aspose_words_cloud/responses/get_paragraph_list_format_online_response.h"
#include "aspose_words_cloud/requests/get_paragraph_online_request.h"
#include "aspose_words_cloud/responses/get_paragraph_online_response.h"
#include "aspose_words_cloud/requests/get_paragraphs_request.h"
#include "aspose_words_cloud/responses/get_paragraphs_response.h"
#include "aspose_words_cloud/requests/get_paragraphs_online_request.h"
#include "aspose_words_cloud/responses/get_paragraphs_online_response.h"
#include "aspose_words_cloud/requests/get_paragraph_tab_stops_request.h"
#include "aspose_words_cloud/responses/get_paragraph_tab_stops_response.h"
#include "aspose_words_cloud/requests/get_paragraph_tab_stops_online_request.h"
#include "aspose_words_cloud/responses/get_paragraph_tab_stops_online_response.h"
#include "aspose_words_cloud/requests/get_public_key_request.h"
#include "aspose_words_cloud/responses/get_public_key_response.h"
#include "aspose_words_cloud/requests/get_range_text_request.h"
#include "aspose_words_cloud/responses/get_range_text_response.h"
#include "aspose_words_cloud/requests/get_range_text_online_request.h"
#include "aspose_words_cloud/responses/get_range_text_online_response.h"
#include "aspose_words_cloud/requests/get_run_request.h"
#include "aspose_words_cloud/responses/get_run_response.h"
#include "aspose_words_cloud/requests/get_run_font_request.h"
#include "aspose_words_cloud/responses/get_run_font_response.h"
#include "aspose_words_cloud/requests/get_run_font_online_request.h"
#include "aspose_words_cloud/responses/get_run_font_online_response.h"
#include "aspose_words_cloud/requests/get_run_online_request.h"
#include "aspose_words_cloud/responses/get_run_online_response.h"
#include "aspose_words_cloud/requests/get_runs_request.h"
#include "aspose_words_cloud/responses/get_runs_response.h"
#include "aspose_words_cloud/requests/get_runs_online_request.h"
#include "aspose_words_cloud/responses/get_runs_online_response.h"
#include "aspose_words_cloud/requests/get_section_request.h"
#include "aspose_words_cloud/responses/get_section_response.h"
#include "aspose_words_cloud/requests/get_section_online_request.h"
#include "aspose_words_cloud/responses/get_section_online_response.h"
#include "aspose_words_cloud/requests/get_section_page_setup_request.h"
#include "aspose_words_cloud/responses/get_section_page_setup_response.h"
#include "aspose_words_cloud/requests/get_section_page_setup_online_request.h"
#include "aspose_words_cloud/responses/get_section_page_setup_online_response.h"
#include "aspose_words_cloud/requests/get_sections_request.h"
#include "aspose_words_cloud/responses/get_sections_response.h"
#include "aspose_words_cloud/requests/get_sections_online_request.h"
#include "aspose_words_cloud/responses/get_sections_online_response.h"
#include "aspose_words_cloud/requests/get_signatures_request.h"
#include "aspose_words_cloud/responses/get_signatures_response.h"
#include "aspose_words_cloud/requests/get_signatures_online_request.h"
#include "aspose_words_cloud/responses/get_signatures_online_response.h"
#include "aspose_words_cloud/requests/get_structured_document_tag_request.h"
#include "aspose_words_cloud/responses/get_structured_document_tag_response.h"
#include "aspose_words_cloud/requests/get_structured_document_tag_online_request.h"
#include "aspose_words_cloud/responses/get_structured_document_tag_online_response.h"
#include "aspose_words_cloud/requests/get_structured_document_tags_request.h"
#include "aspose_words_cloud/responses/get_structured_document_tags_response.h"
#include "aspose_words_cloud/requests/get_structured_document_tags_online_request.h"
#include "aspose_words_cloud/responses/get_structured_document_tags_online_response.h"
#include "aspose_words_cloud/requests/get_style_request.h"
#include "aspose_words_cloud/responses/get_style_response.h"
#include "aspose_words_cloud/requests/get_style_from_document_element_request.h"
#include "aspose_words_cloud/responses/get_style_from_document_element_response.h"
#include "aspose_words_cloud/requests/get_style_from_document_element_online_request.h"
#include "aspose_words_cloud/responses/get_style_from_document_element_online_response.h"
#include "aspose_words_cloud/requests/get_style_online_request.h"
#include "aspose_words_cloud/responses/get_style_online_response.h"
#include "aspose_words_cloud/requests/get_styles_request.h"
#include "aspose_words_cloud/responses/get_styles_response.h"
#include "aspose_words_cloud/requests/get_styles_online_request.h"
#include "aspose_words_cloud/responses/get_styles_online_response.h"
#include "aspose_words_cloud/requests/get_table_request.h"
#include "aspose_words_cloud/responses/get_table_response.h"
#include "aspose_words_cloud/requests/get_table_cell_request.h"
#include "aspose_words_cloud/responses/get_table_cell_response.h"
#include "aspose_words_cloud/requests/get_table_cell_format_request.h"
#include "aspose_words_cloud/responses/get_table_cell_format_response.h"
#include "aspose_words_cloud/requests/get_table_cell_format_online_request.h"
#include "aspose_words_cloud/responses/get_table_cell_format_online_response.h"
#include "aspose_words_cloud/requests/get_table_cell_online_request.h"
#include "aspose_words_cloud/responses/get_table_cell_online_response.h"
#include "aspose_words_cloud/requests/get_table_online_request.h"
#include "aspose_words_cloud/responses/get_table_online_response.h"
#include "aspose_words_cloud/requests/get_table_properties_request.h"
#include "aspose_words_cloud/responses/get_table_properties_response.h"
#include "aspose_words_cloud/requests/get_table_properties_online_request.h"
#include "aspose_words_cloud/responses/get_table_properties_online_response.h"
#include "aspose_words_cloud/requests/get_table_row_request.h"
#include "aspose_words_cloud/responses/get_table_row_response.h"
#include "aspose_words_cloud/requests/get_table_row_format_request.h"
#include "aspose_words_cloud/responses/get_table_row_format_response.h"
#include "aspose_words_cloud/requests/get_table_row_format_online_request.h"
#include "aspose_words_cloud/responses/get_table_row_format_online_response.h"
#include "aspose_words_cloud/requests/get_table_row_online_request.h"
#include "aspose_words_cloud/responses/get_table_row_online_response.h"
#include "aspose_words_cloud/requests/get_tables_request.h"
#include "aspose_words_cloud/responses/get_tables_response.h"
#include "aspose_words_cloud/requests/get_tables_online_request.h"
#include "aspose_words_cloud/responses/get_tables_online_response.h"
#include "aspose_words_cloud/requests/insert_bookmark_request.h"
#include "aspose_words_cloud/responses/insert_bookmark_response.h"
#include "aspose_words_cloud/requests/insert_bookmark_online_request.h"
#include "aspose_words_cloud/responses/insert_bookmark_online_response.h"
#include "aspose_words_cloud/requests/insert_comment_request.h"
#include "aspose_words_cloud/responses/insert_comment_response.h"
#include "aspose_words_cloud/requests/insert_comment_online_request.h"
#include "aspose_words_cloud/responses/insert_comment_online_response.h"
#include "aspose_words_cloud/requests/insert_custom_xml_part_request.h"
#include "aspose_words_cloud/responses/insert_custom_xml_part_response.h"
#include "aspose_words_cloud/requests/insert_custom_xml_part_online_request.h"
#include "aspose_words_cloud/responses/insert_custom_xml_part_online_response.h"
#include "aspose_words_cloud/requests/insert_drawing_object_request.h"
#include "aspose_words_cloud/responses/insert_drawing_object_response.h"
#include "aspose_words_cloud/requests/insert_drawing_object_by_reference_request.h"
#include "aspose_words_cloud/responses/insert_drawing_object_by_reference_response.h"
#include "aspose_words_cloud/requests/insert_drawing_object_by_reference_online_request.h"
#include "aspose_words_cloud/responses/insert_drawing_object_by_reference_online_response.h"
#include "aspose_words_cloud/requests/insert_drawing_object_online_request.h"
#include "aspose_words_cloud/responses/insert_drawing_object_online_response.h"
#include "aspose_words_cloud/requests/insert_field_request.h"
#include "aspose_words_cloud/responses/insert_field_response.h"
#include "aspose_words_cloud/requests/insert_field_online_request.h"
#include "aspose_words_cloud/responses/insert_field_online_response.h"
#include "aspose_words_cloud/requests/insert_footnote_request.h"
#include "aspose_words_cloud/responses/insert_footnote_response.h"
#include "aspose_words_cloud/requests/insert_footnote_online_request.h"
#include "aspose_words_cloud/responses/insert_footnote_online_response.h"
#include "aspose_words_cloud/requests/insert_form_field_request.h"
#include "aspose_words_cloud/responses/insert_form_field_response.h"
#include "aspose_words_cloud/requests/insert_form_field_online_request.h"
#include "aspose_words_cloud/responses/insert_form_field_online_response.h"
#include "aspose_words_cloud/requests/insert_header_footer_request.h"
#include "aspose_words_cloud/responses/insert_header_footer_response.h"
#include "aspose_words_cloud/requests/insert_header_footer_online_request.h"
#include "aspose_words_cloud/responses/insert_header_footer_online_response.h"
#include "aspose_words_cloud/requests/insert_list_request.h"
#include "aspose_words_cloud/responses/insert_list_response.h"
#include "aspose_words_cloud/requests/insert_list_online_request.h"
#include "aspose_words_cloud/responses/insert_list_online_response.h"
#include "aspose_words_cloud/requests/insert_or_update_paragraph_tab_stop_request.h"
#include "aspose_words_cloud/responses/insert_or_update_paragraph_tab_stop_response.h"
#include "aspose_words_cloud/requests/insert_or_update_paragraph_tab_stop_online_request.h"
#include "aspose_words_cloud/responses/insert_or_update_paragraph_tab_stop_online_response.h"
#include "aspose_words_cloud/requests/insert_page_numbers_request.h"
#include "aspose_words_cloud/responses/insert_page_numbers_response.h"
#include "aspose_words_cloud/requests/insert_page_numbers_online_request.h"
#include "aspose_words_cloud/responses/insert_page_numbers_online_response.h"
#include "aspose_words_cloud/requests/insert_paragraph_request.h"
#include "aspose_words_cloud/responses/insert_paragraph_response.h"
#include "aspose_words_cloud/requests/insert_paragraph_online_request.h"
#include "aspose_words_cloud/responses/insert_paragraph_online_response.h"
#include "aspose_words_cloud/requests/insert_run_request.h"
#include "aspose_words_cloud/responses/insert_run_response.h"
#include "aspose_words_cloud/requests/insert_run_online_request.h"
#include "aspose_words_cloud/responses/insert_run_online_response.h"
#include "aspose_words_cloud/requests/insert_section_request.h"
#include "aspose_words_cloud/responses/insert_section_response.h"
#include "aspose_words_cloud/requests/insert_section_online_request.h"
#include "aspose_words_cloud/responses/insert_section_online_response.h"
#include "aspose_words_cloud/requests/insert_structured_document_tag_request.h"
#include "aspose_words_cloud/responses/insert_structured_document_tag_response.h"
#include "aspose_words_cloud/requests/insert_structured_document_tag_online_request.h"
#include "aspose_words_cloud/responses/insert_structured_document_tag_online_response.h"
#include "aspose_words_cloud/requests/insert_style_request.h"
#include "aspose_words_cloud/responses/insert_style_response.h"
#include "aspose_words_cloud/requests/insert_style_online_request.h"
#include "aspose_words_cloud/responses/insert_style_online_response.h"
#include "aspose_words_cloud/requests/insert_table_request.h"
#include "aspose_words_cloud/responses/insert_table_response.h"
#include "aspose_words_cloud/requests/insert_table_cell_request.h"
#include "aspose_words_cloud/responses/insert_table_cell_response.h"
#include "aspose_words_cloud/requests/insert_table_cell_online_request.h"
#include "aspose_words_cloud/responses/insert_table_cell_online_response.h"
#include "aspose_words_cloud/requests/insert_table_online_request.h"
#include "aspose_words_cloud/responses/insert_table_online_response.h"
#include "aspose_words_cloud/requests/insert_table_row_request.h"
#include "aspose_words_cloud/responses/insert_table_row_response.h"
#include "aspose_words_cloud/requests/insert_table_row_online_request.h"
#include "aspose_words_cloud/responses/insert_table_row_online_response.h"
#include "aspose_words_cloud/requests/insert_watermark_request.h"
#include "aspose_words_cloud/responses/insert_watermark_response.h"
#include "aspose_words_cloud/requests/insert_watermark_image_request.h"
#include "aspose_words_cloud/responses/insert_watermark_image_response.h"
#include "aspose_words_cloud/requests/insert_watermark_image_online_request.h"
#include "aspose_words_cloud/responses/insert_watermark_image_online_response.h"
#include "aspose_words_cloud/requests/insert_watermark_online_request.h"
#include "aspose_words_cloud/responses/insert_watermark_online_response.h"
#include "aspose_words_cloud/requests/insert_watermark_text_request.h"
#include "aspose_words_cloud/responses/insert_watermark_text_response.h"
#include "aspose_words_cloud/requests/insert_watermark_text_online_request.h"
#include "aspose_words_cloud/responses/insert_watermark_text_online_response.h"
#include "aspose_words_cloud/requests/link_header_footers_to_previous_request.h"
#include "aspose_words_cloud/responses/link_header_footers_to_previous_response.h"
#include "aspose_words_cloud/requests/load_web_document_request.h"
#include "aspose_words_cloud/responses/load_web_document_response.h"
#include "aspose_words_cloud/requests/load_web_document_online_request.h"
#include "aspose_words_cloud/responses/load_web_document_online_response.h"
#include "aspose_words_cloud/requests/merge_with_next_request.h"
#include "aspose_words_cloud/responses/merge_with_next_response.h"
#include "aspose_words_cloud/requests/merge_with_next_online_request.h"
#include "aspose_words_cloud/responses/merge_with_next_online_response.h"
#include "aspose_words_cloud/requests/move_file_request.h"
#include "aspose_words_cloud/responses/move_file_response.h"
#include "aspose_words_cloud/requests/move_folder_request.h"
#include "aspose_words_cloud/responses/move_folder_response.h"
#include "aspose_words_cloud/requests/optimize_document_request.h"
#include "aspose_words_cloud/responses/optimize_document_response.h"
#include "aspose_words_cloud/requests/optimize_document_online_request.h"
#include "aspose_words_cloud/responses/optimize_document_online_response.h"
#include "aspose_words_cloud/requests/protect_document_request.h"
#include "aspose_words_cloud/responses/protect_document_response.h"
#include "aspose_words_cloud/requests/protect_document_online_request.h"
#include "aspose_words_cloud/responses/protect_document_online_response.h"
#include "aspose_words_cloud/requests/reject_all_revisions_request.h"
#include "aspose_words_cloud/responses/reject_all_revisions_response.h"
#include "aspose_words_cloud/requests/reject_all_revisions_online_request.h"
#include "aspose_words_cloud/responses/reject_all_revisions_online_response.h"
#include "aspose_words_cloud/requests/remove_all_signatures_request.h"
#include "aspose_words_cloud/responses/remove_all_signatures_response.h"
#include "aspose_words_cloud/requests/remove_all_signatures_online_request.h"
#include "aspose_words_cloud/responses/remove_all_signatures_online_response.h"
#include "aspose_words_cloud/requests/remove_range_request.h"
#include "aspose_words_cloud/responses/remove_range_response.h"
#include "aspose_words_cloud/requests/remove_range_online_request.h"
#include "aspose_words_cloud/responses/remove_range_online_response.h"
#include "aspose_words_cloud/requests/render_drawing_object_request.h"
#include "aspose_words_cloud/responses/render_drawing_object_response.h"
#include "aspose_words_cloud/requests/render_drawing_object_online_request.h"
#include "aspose_words_cloud/responses/render_drawing_object_online_response.h"
#include "aspose_words_cloud/requests/render_math_object_request.h"
#include "aspose_words_cloud/responses/render_math_object_response.h"
#include "aspose_words_cloud/requests/render_math_object_online_request.h"
#include "aspose_words_cloud/responses/render_math_object_online_response.h"
#include "aspose_words_cloud/requests/render_page_request.h"
#include "aspose_words_cloud/responses/render_page_response.h"
#include "aspose_words_cloud/requests/render_page_online_request.h"
#include "aspose_words_cloud/responses/render_page_online_response.h"
#include "aspose_words_cloud/requests/render_paragraph_request.h"
#include "aspose_words_cloud/responses/render_paragraph_response.h"
#include "aspose_words_cloud/requests/render_paragraph_online_request.h"
#include "aspose_words_cloud/responses/render_paragraph_online_response.h"
#include "aspose_words_cloud/requests/render_table_request.h"
#include "aspose_words_cloud/responses/render_table_response.h"
#include "aspose_words_cloud/requests/render_table_online_request.h"
#include "aspose_words_cloud/responses/render_table_online_response.h"
#include "aspose_words_cloud/requests/replace_text_request.h"
#include "aspose_words_cloud/responses/replace_text_response.h"
#include "aspose_words_cloud/requests/replace_text_online_request.h"
#include "aspose_words_cloud/responses/replace_text_online_response.h"
#include "aspose_words_cloud/requests/replace_with_text_request.h"
#include "aspose_words_cloud/responses/replace_with_text_response.h"
#include "aspose_words_cloud/requests/replace_with_text_online_request.h"
#include "aspose_words_cloud/responses/replace_with_text_online_response.h"
#include "aspose_words_cloud/requests/reset_cache_request.h"
#include "aspose_words_cloud/responses/reset_cache_response.h"
#include "aspose_words_cloud/requests/save_as_request.h"
#include "aspose_words_cloud/responses/save_as_response.h"
#include "aspose_words_cloud/requests/save_as_online_request.h"
#include "aspose_words_cloud/responses/save_as_online_response.h"
#include "aspose_words_cloud/requests/save_as_range_request.h"
#include "aspose_words_cloud/responses/save_as_range_response.h"
#include "aspose_words_cloud/requests/save_as_range_online_request.h"
#include "aspose_words_cloud/responses/save_as_range_online_response.h"
#include "aspose_words_cloud/requests/save_as_tiff_request.h"
#include "aspose_words_cloud/responses/save_as_tiff_response.h"
#include "aspose_words_cloud/requests/save_as_tiff_online_request.h"
#include "aspose_words_cloud/responses/save_as_tiff_online_response.h"
#include "aspose_words_cloud/requests/search_request.h"
#include "aspose_words_cloud/responses/search_response.h"
#include "aspose_words_cloud/requests/search_online_request.h"
#include "aspose_words_cloud/responses/search_online_response.h"
#include "aspose_words_cloud/requests/sign_document_request.h"
#include "aspose_words_cloud/responses/sign_document_response.h"
#include "aspose_words_cloud/requests/sign_document_online_request.h"
#include "aspose_words_cloud/responses/sign_document_online_response.h"
#include "aspose_words_cloud/requests/split_document_request.h"
#include "aspose_words_cloud/responses/split_document_response.h"
#include "aspose_words_cloud/requests/split_document_job_request.h"
#include "aspose_words_cloud/responses/split_document_job_response.h"
#include "aspose_words_cloud/requests/split_document_online_request.h"
#include "aspose_words_cloud/responses/split_document_online_response.h"
#include "aspose_words_cloud/requests/split_document_online_job_request.h"
#include "aspose_words_cloud/responses/split_document_online_job_response.h"
#include "aspose_words_cloud/requests/translate_node_id_request.h"
#include "aspose_words_cloud/responses/translate_node_id_response.h"
#include "aspose_words_cloud/requests/translate_node_id_online_request.h"
#include "aspose_words_cloud/responses/translate_node_id_online_response.h"
#include "aspose_words_cloud/requests/unprotect_document_request.h"
#include "aspose_words_cloud/responses/unprotect_document_response.h"
#include "aspose_words_cloud/requests/unprotect_document_online_request.h"
#include "aspose_words_cloud/responses/unprotect_document_online_response.h"
#include "aspose_words_cloud/requests/update_bookmark_request.h"
#include "aspose_words_cloud/responses/update_bookmark_response.h"
#include "aspose_words_cloud/requests/update_bookmark_online_request.h"
#include "aspose_words_cloud/responses/update_bookmark_online_response.h"
#include "aspose_words_cloud/requests/update_border_request.h"
#include "aspose_words_cloud/responses/update_border_response.h"
#include "aspose_words_cloud/requests/update_border_online_request.h"
#include "aspose_words_cloud/responses/update_border_online_response.h"
#include "aspose_words_cloud/requests/update_comment_request.h"
#include "aspose_words_cloud/responses/update_comment_response.h"
#include "aspose_words_cloud/requests/update_comment_online_request.h"
#include "aspose_words_cloud/responses/update_comment_online_response.h"
#include "aspose_words_cloud/requests/update_custom_xml_part_request.h"
#include "aspose_words_cloud/responses/update_custom_xml_part_response.h"
#include "aspose_words_cloud/requests/update_custom_xml_part_online_request.h"
#include "aspose_words_cloud/responses/update_custom_xml_part_online_response.h"
#include "aspose_words_cloud/requests/update_drawing_object_request.h"
#include "aspose_words_cloud/responses/update_drawing_object_response.h"
#include "aspose_words_cloud/requests/update_drawing_object_online_request.h"
#include "aspose_words_cloud/responses/update_drawing_object_online_response.h"
#include "aspose_words_cloud/requests/update_field_request.h"
#include "aspose_words_cloud/responses/update_field_response.h"
#include "aspose_words_cloud/requests/update_field_online_request.h"
#include "aspose_words_cloud/responses/update_field_online_response.h"
#include "aspose_words_cloud/requests/update_fields_request.h"
#include "aspose_words_cloud/responses/update_fields_response.h"
#include "aspose_words_cloud/requests/update_fields_online_request.h"
#include "aspose_words_cloud/responses/update_fields_online_response.h"
#include "aspose_words_cloud/requests/update_footnote_request.h"
#include "aspose_words_cloud/responses/update_footnote_response.h"
#include "aspose_words_cloud/requests/update_footnote_online_request.h"
#include "aspose_words_cloud/responses/update_footnote_online_response.h"
#include "aspose_words_cloud/requests/update_form_field_request.h"
#include "aspose_words_cloud/responses/update_form_field_response.h"
#include "aspose_words_cloud/requests/update_form_field_online_request.h"
#include "aspose_words_cloud/responses/update_form_field_online_response.h"
#include "aspose_words_cloud/requests/update_list_request.h"
#include "aspose_words_cloud/responses/update_list_response.h"
#include "aspose_words_cloud/requests/update_list_level_request.h"
#include "aspose_words_cloud/responses/update_list_level_response.h"
#include "aspose_words_cloud/requests/update_list_level_online_request.h"
#include "aspose_words_cloud/responses/update_list_level_online_response.h"
#include "aspose_words_cloud/requests/update_list_online_request.h"
#include "aspose_words_cloud/responses/update_list_online_response.h"
#include "aspose_words_cloud/requests/update_paragraph_format_request.h"
#include "aspose_words_cloud/responses/update_paragraph_format_response.h"
#include "aspose_words_cloud/requests/update_paragraph_format_online_request.h"
#include "aspose_words_cloud/responses/update_paragraph_format_online_response.h"
#include "aspose_words_cloud/requests/update_paragraph_list_format_request.h"
#include "aspose_words_cloud/responses/update_paragraph_list_format_response.h"
#include "aspose_words_cloud/requests/update_paragraph_list_format_online_request.h"
#include "aspose_words_cloud/responses/update_paragraph_list_format_online_response.h"
#include "aspose_words_cloud/requests/update_run_request.h"
#include "aspose_words_cloud/responses/update_run_response.h"
#include "aspose_words_cloud/requests/update_run_font_request.h"
#include "aspose_words_cloud/responses/update_run_font_response.h"
#include "aspose_words_cloud/requests/update_run_font_online_request.h"
#include "aspose_words_cloud/responses/update_run_font_online_response.h"
#include "aspose_words_cloud/requests/update_run_online_request.h"
#include "aspose_words_cloud/responses/update_run_online_response.h"
#include "aspose_words_cloud/requests/update_section_page_setup_request.h"
#include "aspose_words_cloud/responses/update_section_page_setup_response.h"
#include "aspose_words_cloud/requests/update_section_page_setup_online_request.h"
#include "aspose_words_cloud/responses/update_section_page_setup_online_response.h"
#include "aspose_words_cloud/requests/update_structured_document_tag_request.h"
#include "aspose_words_cloud/responses/update_structured_document_tag_response.h"
#include "aspose_words_cloud/requests/update_structured_document_tag_online_request.h"
#include "aspose_words_cloud/responses/update_structured_document_tag_online_response.h"
#include "aspose_words_cloud/requests/update_style_request.h"
#include "aspose_words_cloud/responses/update_style_response.h"
#include "aspose_words_cloud/requests/update_style_online_request.h"
#include "aspose_words_cloud/responses/update_style_online_response.h"
#include "aspose_words_cloud/requests/update_table_cell_format_request.h"
#include "aspose_words_cloud/responses/update_table_cell_format_response.h"
#include "aspose_words_cloud/requests/update_table_cell_format_online_request.h"
#include "aspose_words_cloud/responses/update_table_cell_format_online_response.h"
#include "aspose_words_cloud/requests/update_table_properties_request.h"
#include "aspose_words_cloud/responses/update_table_properties_response.h"
#include "aspose_words_cloud/requests/update_table_properties_online_request.h"
#include "aspose_words_cloud/responses/update_table_properties_online_response.h"
#include "aspose_words_cloud/requests/update_table_row_format_request.h"
#include "aspose_words_cloud/responses/update_table_row_format_response.h"
#include "aspose_words_cloud/requests/update_table_row_format_online_request.h"
#include "aspose_words_cloud/responses/update_table_row_format_online_response.h"
#include "aspose_words_cloud/requests/upload_file_request.h"
#include "aspose_words_cloud/responses/upload_file_response.h"

namespace aspose::words::cloud::api {
    class WordsApi
    {
    public:
        /// <summary>
        /// Accepts all the revisions in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > acceptAllRevisions(std::shared_ptr<aspose::words::cloud::requests::AcceptAllRevisionsRequest> request);

        /// <summary>
        /// Accepts all the revisions in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::AcceptAllRevisionsOnlineResponse> acceptAllRevisionsOnline(std::shared_ptr<aspose::words::cloud::requests::AcceptAllRevisionsOnlineRequest> request);

        /// <summary>
        /// Appends documents to the original document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="documentList"><see cref="BaseEntryList"/> with a list of entries to append.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > appendDocument(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentRequest> request);

        /// <summary>
        /// Appends documents to the original document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="documentList"><see cref="BaseEntryList"/> with a list of entries to append.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::DocumentResponse > > > appendDocumentJob(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentJobRequest> request);

        /// <summary>
        /// Appends documents to the original document.
        /// </summary>
        /// <param name="document">Original document.</param>
        /// <param name="documentList"><see cref="BaseEntryList"/> with a list of entries to append.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::AppendDocumentOnlineResponse> appendDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentOnlineRequest> request);

        /// <summary>
        /// Appends documents to the original document.
        /// </summary>
        /// <param name="document">Original document.</param>
        /// <param name="documentList"><see cref="BaseEntryList"/> with a list of entries to append.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr<aspose::words::cloud::responses::AppendDocumentOnlineResponse> > > appendDocumentOnlineJob(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentOnlineJobRequest> request);

        /// <summary>
        /// Applies a style to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="styledNodePath">The path to the node in the document tree, that supports styles: ParagraphFormat, List, ListLevel, Table.</param>
        /// <param name="styleApply">Style to apply.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::WordsResponse > applyStyleToDocumentElement(std::shared_ptr<aspose::words::cloud::requests::ApplyStyleToDocumentElementRequest> request);

        /// <summary>
        /// Applies a style to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="styledNodePath">The path to the node in the document tree, that supports styles: ParagraphFormat, List, ListLevel, Table.</param>
        /// <param name="styleApply">Style to apply.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::ApplyStyleToDocumentElementOnlineResponse> applyStyleToDocumentElementOnline(std::shared_ptr<aspose::words::cloud::requests::ApplyStyleToDocumentElementOnlineRequest> request);

        /// <summary>
        /// Executes the report generation process using the specified document template and the external data source in XML, JSON or CSV format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="data">A string providing data to populate the specified template. The string must be of one of the following types: xml, json, csv.</param>
        /// <param name="reportEngineSettings">An object providing settings of a report engine.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">The filename of the output document. If this parameter is omitted, the result will be saved with autogenerated name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > buildReport(std::shared_ptr<aspose::words::cloud::requests::BuildReportRequest> request);

        /// <summary>
        /// Executes the report generation process online using the specified document template and the external data source in XML, JSON or CSV format.
        /// </summary>
        /// <param name="_template">File with template.</param>
        /// <param name="data">A string providing data to populate the specified template. The string must be of one of the following types: xml, json, csv.</param>
        /// <param name="reportEngineSettings">An object providing settings of a report engine.</param>
        /// <param name="documentFileName">The filename of the output document, that will be used when the resulting document has a dynamic field {filename}. If it is not set, the "template" will be used instead.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > buildReportOnline(std::shared_ptr<aspose::words::cloud::requests::BuildReportOnlineRequest> request);

        /// <summary>
        /// Compares two documents.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="compareData">Compare data.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > compareDocument(std::shared_ptr<aspose::words::cloud::requests::CompareDocumentRequest> request);

        /// <summary>
        /// Compares two documents.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="compareData">Compare data.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::CompareDocumentOnlineResponse> compareDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::CompareDocumentOnlineRequest> request);

        /// <summary>
        /// Compress and resize images inside the document.
        /// The default settings allows to reduce the size of the document without any visible degradation of images quality.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="compressOptions">Options for compress the document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CompressResponse > compressDocument(std::shared_ptr<aspose::words::cloud::requests::CompressDocumentRequest> request);

        /// <summary>
        /// Compress and resize images inside the document.
        /// The default settings allows to reduce the size of the document without any visible degradation of images quality.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="compressOptions">Options for compress the document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::CompressDocumentOnlineResponse> compressDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::CompressDocumentOnlineRequest> request);

        /// <summary>
        /// Converts a document on a local drive to the specified format.
        /// </summary>
        /// <param name="document">Converting document.</param>
        /// <param name="format">The format to convert.</param>
        /// <param name="outPath">The path to the output document on a local storage.</param>
        /// <param name="fileNameFieldValue">The filename of the output document, that will be used when the resulting document has a dynamic field {filename}. If it is not set, the "sourceFilename" will be used instead.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > convertDocument(std::shared_ptr<aspose::words::cloud::requests::ConvertDocumentRequest> request);

        /// <summary>
        /// Converts a document on a local drive to the specified format.
        /// </summary>
        /// <param name="document">Converting document.</param>
        /// <param name="format">The format to convert.</param>
        /// <param name="outPath">The path to the output document on a local storage.</param>
        /// <param name="fileNameFieldValue">The filename of the output document, that will be used when the resulting document has a dynamic field {filename}. If it is not set, the "sourceFilename" will be used instead.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< std::istream > > > convertDocumentJob(std::shared_ptr<aspose::words::cloud::requests::ConvertDocumentJobRequest> request);

        /// <summary>
        /// Copy file.
        /// </summary>
        /// <param name="destPath">Destination file path.</param>
        /// <param name="srcPath">Source file's path e.g. '/Folder 1/file.ext' or '/Bucket/Folder 1/file.ext'.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        /// <param name="versionId">File version ID to copy.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void copyFile(std::shared_ptr<aspose::words::cloud::requests::CopyFileRequest> request);

        /// <summary>
        /// Copy folder.
        /// </summary>
        /// <param name="destPath">Destination folder path e.g. '/dst'.</param>
        /// <param name="srcPath">Source folder path e.g. /Folder1.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void copyFolder(std::shared_ptr<aspose::words::cloud::requests::CopyFolderRequest> request);

        /// <summary>
        /// Makes a copy of the style in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="styleCopy">Style to copy.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StyleResponse > copyStyle(std::shared_ptr<aspose::words::cloud::requests::CopyStyleRequest> request);

        /// <summary>
        /// Makes a copy of the style in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="styleCopy">Style to copy.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::CopyStyleOnlineResponse> copyStyleOnline(std::shared_ptr<aspose::words::cloud::requests::CopyStyleOnlineRequest> request);

        /// <summary>
        /// Copies styles from the origin document to the target document.
        /// </summary>
        /// <param name="name">The filename of the target document.</param>
        /// <param name="templateName">The filename of the origin document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::WordsResponse > copyStylesFromTemplate(std::shared_ptr<aspose::words::cloud::requests::CopyStylesFromTemplateRequest> request);

        /// <summary>
        /// Creates a new document in cloud storage in the format, determined by the file extension.
        /// Supported all save format extensions.
        /// </summary>
        /// <param name="fileName">The filename of the document.</param>
        /// <param name="folder">The path to the document folder.</param>
        /// <param name="storage">Original document storage.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > createDocument(std::shared_ptr<aspose::words::cloud::requests::CreateDocumentRequest> request);

        /// <summary>
        /// Create the folder.
        /// </summary>
        /// <param name="path">Target folder's path e.g. Folder1/Folder2/. The folders will be created recursively.</param>
        /// <param name="storageName">Storage name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void createFolder(std::shared_ptr<aspose::words::cloud::requests::CreateFolderRequest> request);

        /// <summary>
        /// Adds a new or updates an existing document property.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="propertyName">The name of the property.</param>
        /// <param name="property">The property with new value.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > createOrUpdateDocumentProperty(std::shared_ptr<aspose::words::cloud::requests::CreateOrUpdateDocumentPropertyRequest> request);

        /// <summary>
        /// Adds a new or updates an existing document property.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="propertyName">The name of the property.</param>
        /// <param name="property">The property with new value.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::CreateOrUpdateDocumentPropertyOnlineResponse> createOrUpdateDocumentPropertyOnline(std::shared_ptr<aspose::words::cloud::requests::CreateOrUpdateDocumentPropertyOnlineRequest> request);

        /// <summary>
        /// Removes paragraph tab stops from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > deleteAllParagraphTabStops(std::shared_ptr<aspose::words::cloud::requests::DeleteAllParagraphTabStopsRequest> request);

        /// <summary>
        /// Removes paragraph tab stops from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::DeleteAllParagraphTabStopsOnlineResponse> deleteAllParagraphTabStopsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteAllParagraphTabStopsOnlineRequest> request);

        /// <summary>
        /// Removes a bookmark from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="bookmarkName">The name of the bookmark.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteBookmark(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarkRequest> request);

        /// <summary>
        /// Removes a bookmark from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="bookmarkName">The name of the bookmark.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteBookmarkOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarkOnlineRequest> request);

        /// <summary>
        /// Removes all bookmarks from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteBookmarks(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarksRequest> request);

        /// <summary>
        /// Removes all bookmarks from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteBookmarksOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarksOnlineRequest> request);

        /// <summary>
        /// Removes a border from the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="borderType">Border type.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BorderResponse > deleteBorder(std::shared_ptr<aspose::words::cloud::requests::DeleteBorderRequest> request);

        /// <summary>
        /// Removes a border from the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="borderType">Border type.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::DeleteBorderOnlineResponse> deleteBorderOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBorderOnlineRequest> request);

        /// <summary>
        /// Removes borders from the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BordersResponse > deleteBorders(std::shared_ptr<aspose::words::cloud::requests::DeleteBordersRequest> request);

        /// <summary>
        /// Removes borders from the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::DeleteBordersOnlineResponse> deleteBordersOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBordersOnlineRequest> request);

        /// <summary>
        /// Removes a comment from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="commentIndex">The index of the comment.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteComment(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentRequest> request);

        /// <summary>
        /// Removes a comment from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="commentIndex">The index of the comment.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteCommentOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentOnlineRequest> request);

        /// <summary>
        /// Removes all comments from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteComments(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentsRequest> request);

        /// <summary>
        /// Removes all comments from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteCommentsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentsOnlineRequest> request);

        /// <summary>
        /// Removes the custom xml part from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="customXmlPartIndex">The index of the custom xml part. This index is the number of the entry in the collection of custom xml parts, not the ID of the part.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartRequest> request);

        /// <summary>
        /// Removes the custom xml part from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="customXmlPartIndex">The index of the custom xml part. This index is the number of the entry in the collection of custom xml parts, not the ID of the part.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartOnlineRequest> request);

        /// <summary>
        /// Removes all custom xml parts from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteCustomXmlParts(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartsRequest> request);

        /// <summary>
        /// Removes all custom xml parts from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteCustomXmlPartsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartsOnlineRequest> request);

        /// <summary>
        /// Removes a document property.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="propertyName">The name of the property.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteDocumentProperty(std::shared_ptr<aspose::words::cloud::requests::DeleteDocumentPropertyRequest> request);

        /// <summary>
        /// Removes a document property.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="propertyName">The name of the property.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteDocumentPropertyOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteDocumentPropertyOnlineRequest> request);

        /// <summary>
        /// Removes a DrawingObject from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteDrawingObject(std::shared_ptr<aspose::words::cloud::requests::DeleteDrawingObjectRequest> request);

        /// <summary>
        /// Removes a DrawingObject from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteDrawingObjectOnlineRequest> request);

        /// <summary>
        /// Removes a field from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteField(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldRequest> request);

        /// <summary>
        /// Removes a field from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteFieldOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldOnlineRequest> request);

        /// <summary>
        /// Removes fields from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteFields(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldsRequest> request);

        /// <summary>
        /// Removes fields from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldsOnlineRequest> request);

        /// <summary>
        /// Delete file.
        /// </summary>
        /// <param name="path">Path of the file including the file name and extension e.g. /folder1/file.ext.</param>
        /// <param name="storageName">Storage name.</param>
        /// <param name="versionId">File version ID to delete.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteFile(std::shared_ptr<aspose::words::cloud::requests::DeleteFileRequest> request);

        /// <summary>
        /// Delete folder.
        /// </summary>
        /// <param name="path">Folder path e.g. '/folder'.</param>
        /// <param name="storageName">Storage name.</param>
        /// <param name="recursive">Enable to delete folders, subfolders and files.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteFolder(std::shared_ptr<aspose::words::cloud::requests::DeleteFolderRequest> request);

        /// <summary>
        /// Removes a footnote from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteFootnote(std::shared_ptr<aspose::words::cloud::requests::DeleteFootnoteRequest> request);

        /// <summary>
        /// Removes a footnote from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFootnoteOnlineRequest> request);

        /// <summary>
        /// Removes a form field from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteFormField(std::shared_ptr<aspose::words::cloud::requests::DeleteFormFieldRequest> request);

        /// <summary>
        /// Removes a form field from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFormFieldOnlineRequest> request);

        /// <summary>
        /// Removes a HeaderFooter object from the document section.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteHeaderFooter(std::shared_ptr<aspose::words::cloud::requests::DeleteHeaderFooterRequest> request);

        /// <summary>
        /// Removes a HeaderFooter object from the document section.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteHeaderFooterOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteHeaderFooterOnlineRequest> request);

        /// <summary>
        /// Removes HeaderFooter objects from the document section.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        /// <param name="headersFootersTypes">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteHeadersFooters(std::shared_ptr<aspose::words::cloud::requests::DeleteHeadersFootersRequest> request);

        /// <summary>
        /// Removes HeaderFooter objects from the document section.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        /// <param name="headersFootersTypes">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteHeadersFootersOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteHeadersFootersOnlineRequest> request);

        /// <summary>
        /// Removes macros from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteMacros(std::shared_ptr<aspose::words::cloud::requests::DeleteMacrosRequest> request);

        /// <summary>
        /// Removes macros from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteMacrosOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteMacrosOnlineRequest> request);

        /// <summary>
        /// Removes an OfficeMath object from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteOfficeMathObject(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectRequest> request);

        /// <summary>
        /// Removes an OfficeMath object from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteOfficeMathObjectOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectOnlineRequest> request);

        /// <summary>
        /// Removes all office math objects from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteOfficeMathObjects(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectsRequest> request);

        /// <summary>
        /// Removes all office math objects from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteOfficeMathObjectsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectsOnlineRequest> request);

        /// <summary>
        /// Removes a paragraph from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteParagraph(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphRequest> request);

        /// <summary>
        /// Removes the formatting properties of a paragraph list from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > deleteParagraphListFormat(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphListFormatRequest> request);

        /// <summary>
        /// Removes the formatting properties of a paragraph list from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::DeleteParagraphListFormatOnlineResponse> deleteParagraphListFormatOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphListFormatOnlineRequest> request);

        /// <summary>
        /// Removes a paragraph from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphOnlineRequest> request);

        /// <summary>
        /// Removes a paragraph tab stop from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="position">The position of a tab stop to remove.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > deleteParagraphTabStop(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphTabStopRequest> request);

        /// <summary>
        /// Removes a paragraph tab stop from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="position">The position of a tab stop to remove.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::DeleteParagraphTabStopOnlineResponse> deleteParagraphTabStopOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphTabStopOnlineRequest> request);

        /// <summary>
        /// Removes a Run object from the paragraph.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteRun(std::shared_ptr<aspose::words::cloud::requests::DeleteRunRequest> request);

        /// <summary>
        /// Removes a Run object from the paragraph.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteRunOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteRunOnlineRequest> request);

        /// <summary>
        /// Removes a section from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteSection(std::shared_ptr<aspose::words::cloud::requests::DeleteSectionRequest> request);

        /// <summary>
        /// Removes a section from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteSectionOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteSectionOnlineRequest> request);

        /// <summary>
        /// Removes a StructuredDocumentTag (SDT) from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::DeleteStructuredDocumentTagRequest> request);

        /// <summary>
        /// Removes a StructuredDocumentTag (SDT) from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteStructuredDocumentTagOnlineRequest> request);

        /// <summary>
        /// Removes a table from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteTable(std::shared_ptr<aspose::words::cloud::requests::DeleteTableRequest> request);

        /// <summary>
        /// Removes a cell from the table row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteTableCell(std::shared_ptr<aspose::words::cloud::requests::DeleteTableCellRequest> request);

        /// <summary>
        /// Removes a cell from the table row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteTableCellOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteTableCellOnlineRequest> request);

        /// <summary>
        /// Removes a table from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteTableOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteTableOnlineRequest> request);

        /// <summary>
        /// Removes a row from the table.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void deleteTableRow(std::shared_ptr<aspose::words::cloud::requests::DeleteTableRowRequest> request);

        /// <summary>
        /// Removes a row from the table.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > deleteTableRowOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteTableRowOnlineRequest> request);

        /// <summary>
        /// Removes a watermark from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > deleteWatermark(std::shared_ptr<aspose::words::cloud::requests::DeleteWatermarkRequest> request);

        /// <summary>
        /// Removes a watermark from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::DeleteWatermarkOnlineResponse> deleteWatermarkOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteWatermarkOnlineRequest> request);

        /// <summary>
        /// Download file.
        /// </summary>
        /// <param name="path">Path of the file including the file name and extension e.g. /folder1/file.ext.</param>
        /// <param name="storageName">Storage name.</param>
        /// <param name="versionId">File version ID to download.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > downloadFile(std::shared_ptr<aspose::words::cloud::requests::DownloadFileRequest> request);

        /// <summary>
        /// Executes a Mail Merge operation.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="data">Mail merge data.</param>
        /// <param name="options">Field options.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="withRegions">The flag indicating whether to execute Mail Merge operation with regions.</param>
        /// <param name="mailMergeDataFile">The data file.</param>
        /// <param name="cleanup">The cleanup options.</param>
        /// <param name="useWholeParagraphAsRegion">The flag indicating whether paragraph with TableStart or TableEnd field should be fully included into mail merge region or particular range between TableStart and TableEnd fields. The default value is true.</param>
        /// <param name="mergeWholeDocument">The flag indicating whether fields in whole document are updated while executing of a mail merge with regions.</param>
        /// <param name="destFileName">The filename of the output document. If this parameter is omitted, the result will be saved with autogenerated name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > executeMailMerge(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeRequest> request);

        /// <summary>
        /// Executes a Mail Merge operation.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="data">Mail merge data.</param>
        /// <param name="options">Field options.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="withRegions">The flag indicating whether to execute Mail Merge operation with regions.</param>
        /// <param name="mailMergeDataFile">The data file.</param>
        /// <param name="cleanup">The cleanup options.</param>
        /// <param name="useWholeParagraphAsRegion">The flag indicating whether paragraph with TableStart or TableEnd field should be fully included into mail merge region or particular range between TableStart and TableEnd fields. The default value is true.</param>
        /// <param name="mergeWholeDocument">The flag indicating whether fields in whole document are updated while executing of a mail merge with regions.</param>
        /// <param name="destFileName">The filename of the output document. If this parameter is omitted, the result will be saved with autogenerated name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::DocumentResponse > > > executeMailMergeJob(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeJobRequest> request);

        /// <summary>
        /// Executes a Mail Merge operation online.
        /// </summary>
        /// <param name="_template">File with template.</param>
        /// <param name="data">File with mailmerge data.</param>
        /// <param name="options">Field options.</param>
        /// <param name="withRegions">The flag indicating whether to execute Mail Merge operation with regions.</param>
        /// <param name="mergeWholeDocument">The flag indicating whether fields in whole document are updated while executing of a mail merge with regions.</param>
        /// <param name="cleanup">The cleanup options.</param>
        /// <param name="documentFileName">The filename of the output document, that will be used when the resulting document has a dynamic field {filename}. If it is not set, the "template" will be used instead.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > executeMailMergeOnline(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeOnlineRequest> request);

        /// <summary>
        /// Executes a Mail Merge operation online.
        /// </summary>
        /// <param name="_template">File with template.</param>
        /// <param name="data">File with mailmerge data.</param>
        /// <param name="options">Field options.</param>
        /// <param name="withRegions">The flag indicating whether to execute Mail Merge operation with regions.</param>
        /// <param name="mergeWholeDocument">The flag indicating whether fields in whole document are updated while executing of a mail merge with regions.</param>
        /// <param name="cleanup">The cleanup options.</param>
        /// <param name="documentFileName">The filename of the output document, that will be used when the resulting document has a dynamic field {filename}. If it is not set, the "template" will be used instead.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< std::istream > > > executeMailMergeOnlineJob(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeOnlineJobRequest> request);

        /// <summary>
        /// Get all information about revisions.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RevisionsResponse > getAllRevisions(std::shared_ptr<aspose::words::cloud::requests::GetAllRevisionsRequest> request);

        /// <summary>
        /// Get all information about revisions.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RevisionsResponse > getAllRevisionsOnline(std::shared_ptr<aspose::words::cloud::requests::GetAllRevisionsOnlineRequest> request);

        /// <summary>
        /// Reads available fonts from the document.
        /// </summary>
        /// <param name="fontsLocation">The folder in cloud storage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::AvailableFontsResponse > getAvailableFonts(std::shared_ptr<aspose::words::cloud::requests::GetAvailableFontsRequest> request);

        /// <summary>
        /// Reads a bookmark, specified by name, from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="bookmarkName">The name of the bookmark.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > getBookmarkByName(std::shared_ptr<aspose::words::cloud::requests::GetBookmarkByNameRequest> request);

        /// <summary>
        /// Reads a bookmark, specified by name, from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="bookmarkName">The name of the bookmark.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > getBookmarkByNameOnline(std::shared_ptr<aspose::words::cloud::requests::GetBookmarkByNameOnlineRequest> request);

        /// <summary>
        /// Reads bookmarks from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BookmarksResponse > getBookmarks(std::shared_ptr<aspose::words::cloud::requests::GetBookmarksRequest> request);

        /// <summary>
        /// Reads bookmarks from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BookmarksResponse > getBookmarksOnline(std::shared_ptr<aspose::words::cloud::requests::GetBookmarksOnlineRequest> request);

        /// <summary>
        /// Reads a border from the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="borderType">Border type.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BorderResponse > getBorder(std::shared_ptr<aspose::words::cloud::requests::GetBorderRequest> request);

        /// <summary>
        /// Reads a border from the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="borderType">Border type.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BorderResponse > getBorderOnline(std::shared_ptr<aspose::words::cloud::requests::GetBorderOnlineRequest> request);

        /// <summary>
        /// Reads borders from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BordersResponse > getBorders(std::shared_ptr<aspose::words::cloud::requests::GetBordersRequest> request);

        /// <summary>
        /// Reads borders from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BordersResponse > getBordersOnline(std::shared_ptr<aspose::words::cloud::requests::GetBordersOnlineRequest> request);

        /// <summary>
        /// Reads a comment from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="commentIndex">The index of the comment.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CommentResponse > getComment(std::shared_ptr<aspose::words::cloud::requests::GetCommentRequest> request);

        /// <summary>
        /// Reads a comment from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="commentIndex">The index of the comment.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CommentResponse > getCommentOnline(std::shared_ptr<aspose::words::cloud::requests::GetCommentOnlineRequest> request);

        /// <summary>
        /// Reads comments from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CommentsResponse > getComments(std::shared_ptr<aspose::words::cloud::requests::GetCommentsRequest> request);

        /// <summary>
        /// Reads comments from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CommentsResponse > getCommentsOnline(std::shared_ptr<aspose::words::cloud::requests::GetCommentsOnlineRequest> request);

        /// <summary>
        /// Reads the custom xml part from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="customXmlPartIndex">The index of the custom xml part. This index is the number of the entry in the collection of custom xml parts, not the ID of the part.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > getCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartRequest> request);

        /// <summary>
        /// Reads the custom xml part from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="customXmlPartIndex">The index of the custom xml part. This index is the number of the entry in the collection of custom xml parts, not the ID of the part.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > getCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartOnlineRequest> request);

        /// <summary>
        /// Reads custom xml parts from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CustomXmlPartsResponse > getCustomXmlParts(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartsRequest> request);

        /// <summary>
        /// Reads custom xml parts from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CustomXmlPartsResponse > getCustomXmlPartsOnline(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartsOnlineRequest> request);

        /// <summary>
        /// Reads common information from the document.
        /// </summary>
        /// <param name="documentName">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > getDocument(std::shared_ptr<aspose::words::cloud::requests::GetDocumentRequest> request);

        /// <summary>
        /// Reads a DrawingObject from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > getDocumentDrawingObjectByIndex(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectByIndexRequest> request);

        /// <summary>
        /// Reads a DrawingObject from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > getDocumentDrawingObjectByIndexOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectByIndexOnlineRequest> request);

        /// <summary>
        /// Reads image data of a DrawingObject from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > getDocumentDrawingObjectImageData(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectImageDataRequest> request);

        /// <summary>
        /// Reads image data of a DrawingObject from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > getDocumentDrawingObjectImageDataOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectImageDataOnlineRequest> request);

        /// <summary>
        /// Reads OLE data of a DrawingObject from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > getDocumentDrawingObjectOleData(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectOleDataRequest> request);

        /// <summary>
        /// Reads OLE data of a DrawingObject from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > getDocumentDrawingObjectOleDataOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectOleDataOnlineRequest> request);

        /// <summary>
        /// Reads DrawingObjects from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectsResponse > getDocumentDrawingObjects(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectsRequest> request);

        /// <summary>
        /// Reads DrawingObjects from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectsResponse > getDocumentDrawingObjectsOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectsOnlineRequest> request);

        /// <summary>
        /// Reads merge field names from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="useNonMergeFields">The flag indicating whether to use non merge fields. If true, result includes "mustache" field names.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldNamesResponse > getDocumentFieldNames(std::shared_ptr<aspose::words::cloud::requests::GetDocumentFieldNamesRequest> request);

        /// <summary>
        /// Reads merge field names from the document.
        /// </summary>
        /// <param name="_template">The template document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="useNonMergeFields">The flag indicating whether to use non merge fields. If true, result includes "mustache" field names.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldNamesResponse > getDocumentFieldNamesOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentFieldNamesOnlineRequest> request);

        /// <summary>
        /// Reads a hyperlink from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="hyperlinkIndex">The index of the hyperlink.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HyperlinkResponse > getDocumentHyperlinkByIndex(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinkByIndexRequest> request);

        /// <summary>
        /// Reads a hyperlink from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="hyperlinkIndex">The index of the hyperlink.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HyperlinkResponse > getDocumentHyperlinkByIndexOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinkByIndexOnlineRequest> request);

        /// <summary>
        /// Reads hyperlinks from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HyperlinksResponse > getDocumentHyperlinks(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinksRequest> request);

        /// <summary>
        /// Reads hyperlinks from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HyperlinksResponse > getDocumentHyperlinksOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinksOnlineRequest> request);

        /// <summary>
        /// Reads document properties.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentPropertiesResponse > getDocumentProperties(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertiesRequest> request);

        /// <summary>
        /// Reads document properties.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentPropertiesResponse > getDocumentPropertiesOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertiesOnlineRequest> request);

        /// <summary>
        /// Reads a document property.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="propertyName">The name of the property.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > getDocumentProperty(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertyRequest> request);

        /// <summary>
        /// Reads a document property.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="propertyName">The name of the property.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > getDocumentPropertyOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertyOnlineRequest> request);

        /// <summary>
        /// Reads protection properties from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > getDocumentProtection(std::shared_ptr<aspose::words::cloud::requests::GetDocumentProtectionRequest> request);

        /// <summary>
        /// Reads protection properties from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > getDocumentProtectionOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentProtectionOnlineRequest> request);

        /// <summary>
        /// Reads document statistics.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="includeComments">The flag indicating whether to include comments from the WordCount. The default value is "false".</param>
        /// <param name="includeFootnotes">The flag indicating whether to include footnotes from the WordCount. The default value is "false".</param>
        /// <param name="includeTextInShapes">The flag indicating whether to include shape's text from the WordCount. The default value is "false".</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StatDataResponse > getDocumentStatistics(std::shared_ptr<aspose::words::cloud::requests::GetDocumentStatisticsRequest> request);

        /// <summary>
        /// Reads document statistics.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="includeComments">The flag indicating whether to include comments from the WordCount. The default value is "false".</param>
        /// <param name="includeFootnotes">The flag indicating whether to include footnotes from the WordCount. The default value is "false".</param>
        /// <param name="includeTextInShapes">The flag indicating whether to include shape's text from the WordCount. The default value is "false".</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StatDataResponse > getDocumentStatisticsOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentStatisticsOnlineRequest> request);

        /// <summary>
        /// Converts a document in cloud storage to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="outPath">The path to the output document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > getDocumentWithFormat(std::shared_ptr<aspose::words::cloud::requests::GetDocumentWithFormatRequest> request);

        /// <summary>
        /// Reads a field from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldResponse > getField(std::shared_ptr<aspose::words::cloud::requests::GetFieldRequest> request);

        /// <summary>
        /// Reads a field from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldResponse > getFieldOnline(std::shared_ptr<aspose::words::cloud::requests::GetFieldOnlineRequest> request);

        /// <summary>
        /// Reads fields from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldsResponse > getFields(std::shared_ptr<aspose::words::cloud::requests::GetFieldsRequest> request);

        /// <summary>
        /// Reads fields from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldsResponse > getFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::GetFieldsOnlineRequest> request);

        /// <summary>
        /// Get all files and folders within a folder.
        /// </summary>
        /// <param name="path">Folder path e.g. '/folder'.</param>
        /// <param name="storageName">Storage name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FilesList > getFilesList(std::shared_ptr<aspose::words::cloud::requests::GetFilesListRequest> request);

        /// <summary>
        /// Reads a footnote from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > getFootnote(std::shared_ptr<aspose::words::cloud::requests::GetFootnoteRequest> request);

        /// <summary>
        /// Reads a footnote from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > getFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::GetFootnoteOnlineRequest> request);

        /// <summary>
        /// Reads footnotes from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FootnotesResponse > getFootnotes(std::shared_ptr<aspose::words::cloud::requests::GetFootnotesRequest> request);

        /// <summary>
        /// Reads footnotes from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FootnotesResponse > getFootnotesOnline(std::shared_ptr<aspose::words::cloud::requests::GetFootnotesOnlineRequest> request);

        /// <summary>
        /// Reads a form field from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > getFormField(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldRequest> request);

        /// <summary>
        /// Reads a form field from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > getFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldOnlineRequest> request);

        /// <summary>
        /// Reads form fields from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FormFieldsResponse > getFormFields(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldsRequest> request);

        /// <summary>
        /// Reads form fields from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FormFieldsResponse > getFormFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldsOnlineRequest> request);

        /// <summary>
        /// Reads a HeaderFooter object from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="headerFooterIndex">The index of the HeaderFooter object.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="filterByType">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > getHeaderFooter(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterRequest> request);

        /// <summary>
        /// Reads a HeaderFooter object from the document section.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="headerFooterIndex">The index of the HeaderFooter object.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="filterByType">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > getHeaderFooterOfSection(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterOfSectionRequest> request);

        /// <summary>
        /// Reads a HeaderFooter object from the document section.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="headerFooterIndex">The index of the HeaderFooter object.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="filterByType">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > getHeaderFooterOfSectionOnline(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterOfSectionOnlineRequest> request);

        /// <summary>
        /// Reads a HeaderFooter object from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="headerFooterIndex">The index of the HeaderFooter object.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="filterByType">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > getHeaderFooterOnline(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterOnlineRequest> request);

        /// <summary>
        /// Reads HeaderFooter objects from the document section.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="filterByType">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HeaderFootersResponse > getHeaderFooters(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFootersRequest> request);

        /// <summary>
        /// Reads HeaderFooter objects from the document section.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="filterByType">The list of HeaderFooter types.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HeaderFootersResponse > getHeaderFootersOnline(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFootersOnlineRequest> request);

        /// <summary>
        /// Returns application info.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::InfoResponse > getInfo(std::shared_ptr<aspose::words::cloud::requests::GetInfoRequest> request);

        /// <summary>
        /// Reads a list from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="listId">The list Id.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ListResponse > getList(std::shared_ptr<aspose::words::cloud::requests::GetListRequest> request);

        /// <summary>
        /// Reads a list from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="listId">The list Id.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ListResponse > getListOnline(std::shared_ptr<aspose::words::cloud::requests::GetListOnlineRequest> request);

        /// <summary>
        /// Reads lists from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ListsResponse > getLists(std::shared_ptr<aspose::words::cloud::requests::GetListsRequest> request);

        /// <summary>
        /// Reads lists from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ListsResponse > getListsOnline(std::shared_ptr<aspose::words::cloud::requests::GetListsOnlineRequest> request);

        /// <summary>
        /// Reads an OfficeMath object from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectResponse > getOfficeMathObject(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectRequest> request);

        /// <summary>
        /// Reads an OfficeMath object from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectResponse > getOfficeMathObjectOnline(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectOnlineRequest> request);

        /// <summary>
        /// Reads OfficeMath objects from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectsResponse > getOfficeMathObjects(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectsRequest> request);

        /// <summary>
        /// Reads OfficeMath objects from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectsResponse > getOfficeMathObjectsOnline(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectsOnlineRequest> request);

        /// <summary>
        /// Reads a paragraph from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > getParagraph(std::shared_ptr<aspose::words::cloud::requests::GetParagraphRequest> request);

        /// <summary>
        /// Reads the formatting properties of a paragraph from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > getParagraphFormat(std::shared_ptr<aspose::words::cloud::requests::GetParagraphFormatRequest> request);

        /// <summary>
        /// Reads the formatting properties of a paragraph from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > getParagraphFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphFormatOnlineRequest> request);

        /// <summary>
        /// Reads the formatting properties of a paragraph list from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > getParagraphListFormat(std::shared_ptr<aspose::words::cloud::requests::GetParagraphListFormatRequest> request);

        /// <summary>
        /// Reads the formatting properties of a paragraph list from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > getParagraphListFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphListFormatOnlineRequest> request);

        /// <summary>
        /// Reads a paragraph from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > getParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphOnlineRequest> request);

        /// <summary>
        /// Reads paragraphs from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphLinkCollectionResponse > getParagraphs(std::shared_ptr<aspose::words::cloud::requests::GetParagraphsRequest> request);

        /// <summary>
        /// Reads paragraphs from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphLinkCollectionResponse > getParagraphsOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphsOnlineRequest> request);

        /// <summary>
        /// Reads paragraph tab stops from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > getParagraphTabStops(std::shared_ptr<aspose::words::cloud::requests::GetParagraphTabStopsRequest> request);

        /// <summary>
        /// Reads paragraph tab stops from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > getParagraphTabStopsOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphTabStopsOnlineRequest> request);

        /// <summary>
        /// Get asymmetric public key.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::PublicKeyResponse > getPublicKey(std::shared_ptr<aspose::words::cloud::requests::GetPublicKeyRequest> request);

        /// <summary>
        /// Reads range text from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RangeTextResponse > getRangeText(std::shared_ptr<aspose::words::cloud::requests::GetRangeTextRequest> request);

        /// <summary>
        /// Reads range text from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RangeTextResponse > getRangeTextOnline(std::shared_ptr<aspose::words::cloud::requests::GetRangeTextOnlineRequest> request);

        /// <summary>
        /// Reads a Run object from the paragraph.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RunResponse > getRun(std::shared_ptr<aspose::words::cloud::requests::GetRunRequest> request);

        /// <summary>
        /// Reads the font properties of a Run object from the paragraph.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FontResponse > getRunFont(std::shared_ptr<aspose::words::cloud::requests::GetRunFontRequest> request);

        /// <summary>
        /// Reads the font properties of a Run object from the paragraph.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FontResponse > getRunFontOnline(std::shared_ptr<aspose::words::cloud::requests::GetRunFontOnlineRequest> request);

        /// <summary>
        /// Reads a Run object from the paragraph.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RunResponse > getRunOnline(std::shared_ptr<aspose::words::cloud::requests::GetRunOnlineRequest> request);

        /// <summary>
        /// Reads Run objects from the paragraph.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RunsResponse > getRuns(std::shared_ptr<aspose::words::cloud::requests::GetRunsRequest> request);

        /// <summary>
        /// Reads Run objects from the paragraph.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RunsResponse > getRunsOnline(std::shared_ptr<aspose::words::cloud::requests::GetRunsOnlineRequest> request);

        /// <summary>
        /// Reads a section from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SectionResponse > getSection(std::shared_ptr<aspose::words::cloud::requests::GetSectionRequest> request);

        /// <summary>
        /// Reads a section from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SectionResponse > getSectionOnline(std::shared_ptr<aspose::words::cloud::requests::GetSectionOnlineRequest> request);

        /// <summary>
        /// Reads the page setup of a section from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > getSectionPageSetup(std::shared_ptr<aspose::words::cloud::requests::GetSectionPageSetupRequest> request);

        /// <summary>
        /// Reads the page setup of a section from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > getSectionPageSetupOnline(std::shared_ptr<aspose::words::cloud::requests::GetSectionPageSetupOnlineRequest> request);

        /// <summary>
        /// Reads sections from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SectionLinkCollectionResponse > getSections(std::shared_ptr<aspose::words::cloud::requests::GetSectionsRequest> request);

        /// <summary>
        /// Reads sections from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SectionLinkCollectionResponse > getSectionsOnline(std::shared_ptr<aspose::words::cloud::requests::GetSectionsOnlineRequest> request);

        /// <summary>
        /// Gets signatures from the document.
        /// </summary>
        /// <param name="name">The filename of the Word document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > getSignatures(std::shared_ptr<aspose::words::cloud::requests::GetSignaturesRequest> request);

        /// <summary>
        /// Gets signatures from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > getSignaturesOnline(std::shared_ptr<aspose::words::cloud::requests::GetSignaturesOnlineRequest> request);

        /// <summary>
        /// Reads a StructuredDocumentTag (SDT) from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > getStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagRequest> request);

        /// <summary>
        /// Reads a StructuredDocumentTag (SDT) from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > getStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagOnlineRequest> request);

        /// <summary>
        /// Reads StructuredDocumentTags (SDT) from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagsResponse > getStructuredDocumentTags(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagsRequest> request);

        /// <summary>
        /// Reads StructuredDocumentTags (SDT) from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagsResponse > getStructuredDocumentTagsOnline(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagsOnlineRequest> request);

        /// <summary>
        /// Reads a style from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="styleName">The name of the style.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StyleResponse > getStyle(std::shared_ptr<aspose::words::cloud::requests::GetStyleRequest> request);

        /// <summary>
        /// Reads a style from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="styledNodePath">The path to the node in the document tree, that supports styles: ParagraphFormat, List, ListLevel, Table.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StyleResponse > getStyleFromDocumentElement(std::shared_ptr<aspose::words::cloud::requests::GetStyleFromDocumentElementRequest> request);

        /// <summary>
        /// Reads a style from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="styledNodePath">The path to the node in the document tree, that supports styles: ParagraphFormat, List, ListLevel, Table.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StyleResponse > getStyleFromDocumentElementOnline(std::shared_ptr<aspose::words::cloud::requests::GetStyleFromDocumentElementOnlineRequest> request);

        /// <summary>
        /// Reads a style from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="styleName">The name of the style.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StyleResponse > getStyleOnline(std::shared_ptr<aspose::words::cloud::requests::GetStyleOnlineRequest> request);

        /// <summary>
        /// Reads styles from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StylesResponse > getStyles(std::shared_ptr<aspose::words::cloud::requests::GetStylesRequest> request);

        /// <summary>
        /// Reads styles from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StylesResponse > getStylesOnline(std::shared_ptr<aspose::words::cloud::requests::GetStylesOnlineRequest> request);

        /// <summary>
        /// Reads a table from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableResponse > getTable(std::shared_ptr<aspose::words::cloud::requests::GetTableRequest> request);

        /// <summary>
        /// Reads a cell from the table row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableCellResponse > getTableCell(std::shared_ptr<aspose::words::cloud::requests::GetTableCellRequest> request);

        /// <summary>
        /// Reads the formatting properties of a table cell.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > getTableCellFormat(std::shared_ptr<aspose::words::cloud::requests::GetTableCellFormatRequest> request);

        /// <summary>
        /// Reads the formatting properties of a table cell.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > getTableCellFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableCellFormatOnlineRequest> request);

        /// <summary>
        /// Reads a cell from the table row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableCellResponse > getTableCellOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableCellOnlineRequest> request);

        /// <summary>
        /// Reads a table from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableResponse > getTableOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableOnlineRequest> request);

        /// <summary>
        /// Reads properties of a table from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > getTableProperties(std::shared_ptr<aspose::words::cloud::requests::GetTablePropertiesRequest> request);

        /// <summary>
        /// Reads properties of a table from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > getTablePropertiesOnline(std::shared_ptr<aspose::words::cloud::requests::GetTablePropertiesOnlineRequest> request);

        /// <summary>
        /// Reads a row from the table.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableRowResponse > getTableRow(std::shared_ptr<aspose::words::cloud::requests::GetTableRowRequest> request);

        /// <summary>
        /// Reads the formatting properties of a table row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > getTableRowFormat(std::shared_ptr<aspose::words::cloud::requests::GetTableRowFormatRequest> request);

        /// <summary>
        /// Reads the formatting properties of a table row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > getTableRowFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableRowFormatOnlineRequest> request);

        /// <summary>
        /// Reads a row from the table.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableRowResponse > getTableRowOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableRowOnlineRequest> request);

        /// <summary>
        /// Reads tables from the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableLinkCollectionResponse > getTables(std::shared_ptr<aspose::words::cloud::requests::GetTablesRequest> request);

        /// <summary>
        /// Reads tables from the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableLinkCollectionResponse > getTablesOnline(std::shared_ptr<aspose::words::cloud::requests::GetTablesOnlineRequest> request);

        /// <summary>
        /// Inserts a new bookmark to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="bookmark">Bookmark to insert.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > insertBookmark(std::shared_ptr<aspose::words::cloud::requests::InsertBookmarkRequest> request);

        /// <summary>
        /// Inserts a new bookmark to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="bookmark">Bookmark to insert.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertBookmarkOnlineResponse> insertBookmarkOnline(std::shared_ptr<aspose::words::cloud::requests::InsertBookmarkOnlineRequest> request);

        /// <summary>
        /// Inserts a new comment to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="comment">Comment data.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CommentResponse > insertComment(std::shared_ptr<aspose::words::cloud::requests::InsertCommentRequest> request);

        /// <summary>
        /// Inserts a new comment to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="comment">Comment data.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertCommentOnlineResponse> insertCommentOnline(std::shared_ptr<aspose::words::cloud::requests::InsertCommentOnlineRequest> request);

        /// <summary>
        /// Inserts a new custom xml part to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="customXmlPart">Custom xml part.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > insertCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::InsertCustomXmlPartRequest> request);

        /// <summary>
        /// Inserts a new custom xml part to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="customXmlPart">Custom xml part.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertCustomXmlPartOnlineResponse> insertCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::InsertCustomXmlPartOnlineRequest> request);

        /// <summary>
        /// Inserts a new DrawingObject to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="drawingObject">Drawing object parameters.</param>
        /// <param name="imageFile">File with image.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > insertDrawingObject(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectRequest> request);

        /// <summary>
        /// Inserts a new DrawingObject to the document node. The image is passed by reference:
        /// a storage path in the document folder or its subfolders, an HTTP(S) URL, or a request part.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="drawingObject">Drawing object parameters with the image reference.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > insertDrawingObjectByReference(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectByReferenceRequest> request);

        /// <summary>
        /// Inserts a new DrawingObject to the document node. The image is passed by reference:
        /// a storage path in the document folder or its subfolders, an HTTP(S) URL, or a request part.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="drawingObject">Drawing object parameters with the image reference.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertDrawingObjectByReferenceOnlineResponse> insertDrawingObjectByReferenceOnline(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectByReferenceOnlineRequest> request);

        /// <summary>
        /// Inserts a new DrawingObject to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="drawingObject">Drawing object parameters.</param>
        /// <param name="imageFile">File with image.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertDrawingObjectOnlineResponse> insertDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectOnlineRequest> request);

        /// <summary>
        /// Inserts a new field to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="field">Field data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldResponse > insertField(std::shared_ptr<aspose::words::cloud::requests::InsertFieldRequest> request);

        /// <summary>
        /// Inserts a new field to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="field">Field data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertFieldOnlineResponse> insertFieldOnline(std::shared_ptr<aspose::words::cloud::requests::InsertFieldOnlineRequest> request);

        /// <summary>
        /// Inserts a new footnote to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="footnoteDto">Footnote data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > insertFootnote(std::shared_ptr<aspose::words::cloud::requests::InsertFootnoteRequest> request);

        /// <summary>
        /// Inserts a new footnote to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="footnoteDto">Footnote data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertFootnoteOnlineResponse> insertFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::InsertFootnoteOnlineRequest> request);

        /// <summary>
        /// Inserts a new form field to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="formField">From field data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        /// <param name="insertBeforeNode">The index of the node. A new form field will be inserted before the node with the specified node Id.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > insertFormField(std::shared_ptr<aspose::words::cloud::requests::InsertFormFieldRequest> request);

        /// <summary>
        /// Inserts a new form field to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="formField">From field data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        /// <param name="insertBeforeNode">The index of the node. A new form field will be inserted before the node with the specified node Id.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertFormFieldOnlineResponse> insertFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::InsertFormFieldOnlineRequest> request);

        /// <summary>
        /// Inserts a new HeaderFooter object to the document section.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="headerFooterType">Type of header/footer.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > insertHeaderFooter(std::shared_ptr<aspose::words::cloud::requests::InsertHeaderFooterRequest> request);

        /// <summary>
        /// Inserts a new HeaderFooter object to the document section.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionPath">The path to the section in the document tree.</param>
        /// <param name="headerFooterType">Type of header/footer.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertHeaderFooterOnlineResponse> insertHeaderFooterOnline(std::shared_ptr<aspose::words::cloud::requests::InsertHeaderFooterOnlineRequest> request);

        /// <summary>
        /// Inserts a new list to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="listInsert">List object.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ListResponse > insertList(std::shared_ptr<aspose::words::cloud::requests::InsertListRequest> request);

        /// <summary>
        /// Inserts a new list to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="listInsert">List object.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertListOnlineResponse> insertListOnline(std::shared_ptr<aspose::words::cloud::requests::InsertListOnlineRequest> request);

        /// <summary>
        /// Inserts a new or updates an existing paragraph tab stop in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="tabStopInsertDto">TabStopInsert dto.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > insertOrUpdateParagraphTabStop(std::shared_ptr<aspose::words::cloud::requests::InsertOrUpdateParagraphTabStopRequest> request);

        /// <summary>
        /// Inserts a new or updates an existing paragraph tab stop in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tabStopInsertDto">TabStopInsert dto.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertOrUpdateParagraphTabStopOnlineResponse> insertOrUpdateParagraphTabStopOnline(std::shared_ptr<aspose::words::cloud::requests::InsertOrUpdateParagraphTabStopOnlineRequest> request);

        /// <summary>
        /// Inserts page numbers to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="pageNumber">Page number dto.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > insertPageNumbers(std::shared_ptr<aspose::words::cloud::requests::InsertPageNumbersRequest> request);

        /// <summary>
        /// Inserts page numbers to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="pageNumber">Page number dto.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertPageNumbersOnlineResponse> insertPageNumbersOnline(std::shared_ptr<aspose::words::cloud::requests::InsertPageNumbersOnlineRequest> request);

        /// <summary>
        /// Inserts a new paragraph to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="paragraph">Paragraph data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > insertParagraph(std::shared_ptr<aspose::words::cloud::requests::InsertParagraphRequest> request);

        /// <summary>
        /// Inserts a new paragraph to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraph">Paragraph data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertParagraphOnlineResponse> insertParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::InsertParagraphOnlineRequest> request);

        /// <summary>
        /// Inserts a new Run object to the paragraph.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="run">Run data.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RunResponse > insertRun(std::shared_ptr<aspose::words::cloud::requests::InsertRunRequest> request);

        /// <summary>
        /// Inserts a new Run object to the paragraph.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="run">Run data.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertRunOnlineResponse> insertRunOnline(std::shared_ptr<aspose::words::cloud::requests::InsertRunOnlineRequest> request);

        /// <summary>
        /// Inserts a section to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionIndex">The index to insert into.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void insertSection(std::shared_ptr<aspose::words::cloud::requests::InsertSectionRequest> request);

        /// <summary>
        /// Inserts a section to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionIndex">The index to insert into.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > insertSectionOnline(std::shared_ptr<aspose::words::cloud::requests::InsertSectionOnlineRequest> request);

        /// <summary>
        /// Inserts a new StructuredDocumentTag (SDT) to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="structuredDocumentTag">Structured document tag parameters.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > insertStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::InsertStructuredDocumentTagRequest> request);

        /// <summary>
        /// Inserts a new StructuredDocumentTag (SDT) to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="structuredDocumentTag">Structured document tag parameters.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertStructuredDocumentTagOnlineResponse> insertStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::InsertStructuredDocumentTagOnlineRequest> request);

        /// <summary>
        /// Inserts a new style to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="styleInsert">Style to insert.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StyleResponse > insertStyle(std::shared_ptr<aspose::words::cloud::requests::InsertStyleRequest> request);

        /// <summary>
        /// Inserts a new style to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="styleInsert">Style to insert.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertStyleOnlineResponse> insertStyleOnline(std::shared_ptr<aspose::words::cloud::requests::InsertStyleOnlineRequest> request);

        /// <summary>
        /// Inserts a new table to the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="table">Table parameters.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableResponse > insertTable(std::shared_ptr<aspose::words::cloud::requests::InsertTableRequest> request);

        /// <summary>
        /// Inserts a new cell to the table row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="cell">Table cell parameters.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableCellResponse > insertTableCell(std::shared_ptr<aspose::words::cloud::requests::InsertTableCellRequest> request);

        /// <summary>
        /// Inserts a new cell to the table row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="cell">Table cell parameters.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertTableCellOnlineResponse> insertTableCellOnline(std::shared_ptr<aspose::words::cloud::requests::InsertTableCellOnlineRequest> request);

        /// <summary>
        /// Inserts a new table to the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="table">Table parameters.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertTableOnlineResponse> insertTableOnline(std::shared_ptr<aspose::words::cloud::requests::InsertTableOnlineRequest> request);

        /// <summary>
        /// Inserts a new row to the table.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="row">Table row parameters.</param>
        /// <param name="nodePath">The path to the table in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableRowResponse > insertTableRow(std::shared_ptr<aspose::words::cloud::requests::InsertTableRowRequest> request);

        /// <summary>
        /// Inserts a new row to the table.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="row">Table row parameters.</param>
        /// <param name="nodePath">The path to the table in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertTableRowOnlineResponse> insertTableRowOnline(std::shared_ptr<aspose::words::cloud::requests::InsertTableRowOnlineRequest> request);

        /// <summary>
        /// Insert a watermark to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="watermarkData">The watermark data.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > insertWatermark(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkRequest> request);

        /// <summary>
        /// Inserts a new watermark image to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="imageFile">File with image.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        /// <param name="rotationAngle">The rotation angle of the watermark.</param>
        /// <param name="image">The filename of the image. If the parameter value is missing — the image data is expected in the request content.</param>
        [[deprecated("This operation is deprecated and is used for backward compatibility only. Please use InsertWatermark instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > insertWatermarkImage(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkImageRequest> request);

        /// <summary>
        /// Inserts a new watermark image to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="imageFile">File with image.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        /// <param name="rotationAngle">The rotation angle of the watermark.</param>
        /// <param name="image">The filename of the image. If the parameter value is missing — the image data is expected in the request content.</param>
        [[deprecated("This operation is deprecated and is used for backward compatibility only. Please use InsertWatermark instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertWatermarkImageOnlineResponse> insertWatermarkImageOnline(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkImageOnlineRequest> request);

        /// <summary>
        /// Insert a watermark to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="watermarkData">The watermark data.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertWatermarkOnlineResponse> insertWatermarkOnline(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkOnlineRequest> request);

        /// <summary>
        /// Inserts a new watermark text to the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="watermarkText">The watermark data.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        [[deprecated("This operation is deprecated and is used for backward compatibility only. Please use InsertWatermark instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > insertWatermarkText(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkTextRequest> request);

        /// <summary>
        /// Inserts a new watermark text to the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="watermarkText">The watermark data.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        [[deprecated("This operation is deprecated and is used for backward compatibility only. Please use InsertWatermark instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::InsertWatermarkTextOnlineResponse> insertWatermarkTextOnline(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkTextOnlineRequest> request);

        /// <summary>
        /// Links headers / footers of the section to the previous one.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        /// <param name="mode">Linking mode.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void linkHeaderFootersToPrevious(std::shared_ptr<aspose::words::cloud::requests::LinkHeaderFootersToPreviousRequest> request);

        /// <summary>
        /// Downloads a document from the Web using URL and saves it to cloud storage in the specified format.
        /// </summary>
        /// <param name="data">The properties of data downloading.</param>
        /// <param name="storage">Original document storage.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SaveResponse > loadWebDocument(std::shared_ptr<aspose::words::cloud::requests::LoadWebDocumentRequest> request);

        /// <summary>
        /// Downloads a document from the Web using URL and saves it to cloud storage in the specified format.
        /// </summary>
        /// <param name="data">The properties of data downloading.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::LoadWebDocumentOnlineResponse> loadWebDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::LoadWebDocumentOnlineRequest> request);

        /// <summary>
        /// Merge the section with the next one.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void mergeWithNext(std::shared_ptr<aspose::words::cloud::requests::MergeWithNextRequest> request);

        /// <summary>
        /// Merge the section with the next one.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > mergeWithNextOnline(std::shared_ptr<aspose::words::cloud::requests::MergeWithNextOnlineRequest> request);

        /// <summary>
        /// Move file.
        /// </summary>
        /// <param name="destPath">Destination file path e.g. '/dest.ext'.</param>
        /// <param name="srcPath">Source file's path e.g. '/Folder 1/file.ext' or '/Bucket/Folder 1/file.ext'.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        /// <param name="versionId">File version ID to move.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void moveFile(std::shared_ptr<aspose::words::cloud::requests::MoveFileRequest> request);

        /// <summary>
        /// Move folder.
        /// </summary>
        /// <param name="destPath">Destination folder path to move to e.g '/dst'.</param>
        /// <param name="srcPath">Source folder path e.g. /Folder1.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void moveFolder(std::shared_ptr<aspose::words::cloud::requests::MoveFolderRequest> request);

        /// <summary>
        /// Applies document content optimization options, specific to a particular versions of Microsoft Word.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="options">The document optimization options.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT void optimizeDocument(std::shared_ptr<aspose::words::cloud::requests::OptimizeDocumentRequest> request);

        /// <summary>
        /// Applies document content optimization options, specific to a particular versions of Microsoft Word.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="options">The document optimization options.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > optimizeDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::OptimizeDocumentOnlineRequest> request);

        /// <summary>
        /// Changes the document protection. The previous protection will be overwritten if it exist.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="protectionRequest">Use ProtectionRequestV2 model to provide protection options.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > protectDocument(std::shared_ptr<aspose::words::cloud::requests::ProtectDocumentRequest> request);

        /// <summary>
        /// Changes the document protection. The previous protection will be overwritten if it exist.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="protectionRequest">Use ProtectionRequestV2 model to provide protection options.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::ProtectDocumentOnlineResponse> protectDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::ProtectDocumentOnlineRequest> request);

        /// <summary>
        /// Rejects all revisions in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > rejectAllRevisions(std::shared_ptr<aspose::words::cloud::requests::RejectAllRevisionsRequest> request);

        /// <summary>
        /// Rejects all revisions in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::RejectAllRevisionsOnlineResponse> rejectAllRevisionsOnline(std::shared_ptr<aspose::words::cloud::requests::RejectAllRevisionsOnlineRequest> request);

        /// <summary>
        /// Removes all signatures of the document.
        /// </summary>
        /// <param name="name">Name of the document with signatures.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > removeAllSignatures(std::shared_ptr<aspose::words::cloud::requests::RemoveAllSignaturesRequest> request);

        /// <summary>
        /// Removes all signatures of the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::RemoveAllSignaturesOnlineResponse> removeAllSignaturesOnline(std::shared_ptr<aspose::words::cloud::requests::RemoveAllSignaturesOnlineRequest> request);

        /// <summary>
        /// Removes a range from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > removeRange(std::shared_ptr<aspose::words::cloud::requests::RemoveRangeRequest> request);

        /// <summary>
        /// Removes a range from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::RemoveRangeOnlineResponse> removeRangeOnline(std::shared_ptr<aspose::words::cloud::requests::RemoveRangeOnlineRequest> request);

        /// <summary>
        /// Renders a DrawingObject to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderDrawingObject(std::shared_ptr<aspose::words::cloud::requests::RenderDrawingObjectRequest> request);

        /// <summary>
        /// Renders a DrawingObject to the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::RenderDrawingObjectOnlineRequest> request);

        /// <summary>
        /// Renders an OfficeMath object to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderMathObject(std::shared_ptr<aspose::words::cloud::requests::RenderMathObjectRequest> request);

        /// <summary>
        /// Renders an OfficeMath object to the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderMathObjectOnline(std::shared_ptr<aspose::words::cloud::requests::RenderMathObjectOnlineRequest> request);

        /// <summary>
        /// Renders a page to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="pageIndex">The index of the page.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderPage(std::shared_ptr<aspose::words::cloud::requests::RenderPageRequest> request);

        /// <summary>
        /// Renders a page to the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="pageIndex">The index of the page.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderPageOnline(std::shared_ptr<aspose::words::cloud::requests::RenderPageOnlineRequest> request);

        /// <summary>
        /// Renders a paragraph to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderParagraph(std::shared_ptr<aspose::words::cloud::requests::RenderParagraphRequest> request);

        /// <summary>
        /// Renders a paragraph to the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::RenderParagraphOnlineRequest> request);

        /// <summary>
        /// Renders a table to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderTable(std::shared_ptr<aspose::words::cloud::requests::RenderTableRequest> request);

        /// <summary>
        /// Renders a table to the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::istream > renderTableOnline(std::shared_ptr<aspose::words::cloud::requests::RenderTableOnlineRequest> request);

        /// <summary>
        /// Replaces text in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="replaceText">The replace operation settings.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ReplaceTextResponse > replaceText(std::shared_ptr<aspose::words::cloud::requests::ReplaceTextRequest> request);

        /// <summary>
        /// Replaces text in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="replaceText">The replace operation settings.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::ReplaceTextOnlineResponse> replaceTextOnline(std::shared_ptr<aspose::words::cloud::requests::ReplaceTextOnlineRequest> request);

        /// <summary>
        /// Replaces a range with text in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="rangeText">Model with text for replacement.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > replaceWithText(std::shared_ptr<aspose::words::cloud::requests::ReplaceWithTextRequest> request);

        /// <summary>
        /// Replaces a range with text in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="rangeText">Model with text for replacement.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::ReplaceWithTextOnlineResponse> replaceWithTextOnline(std::shared_ptr<aspose::words::cloud::requests::ReplaceWithTextOnlineRequest> request);

        /// <summary>
        /// Clears the font cache.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT void resetCache(std::shared_ptr<aspose::words::cloud::requests::ResetCacheRequest> request);

        /// <summary>
        /// Converts a document in cloud storage to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="saveOptionsData">Save options.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SaveResponse > saveAs(std::shared_ptr<aspose::words::cloud::requests::SaveAsRequest> request);

        /// <summary>
        /// Converts a document in cloud storage to the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="saveOptionsData">Save options.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::SaveAsOnlineResponse> saveAsOnline(std::shared_ptr<aspose::words::cloud::requests::SaveAsOnlineRequest> request);

        /// <summary>
        /// Saves a range as a new document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="documentParameters">Parameters of a new document.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > saveAsRange(std::shared_ptr<aspose::words::cloud::requests::SaveAsRangeRequest> request);

        /// <summary>
        /// Saves a range as a new document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="rangeStartIdentifier">The range start identifier. Identifier examples: id0.0.0, page0.</param>
        /// <param name="documentParameters">Parameters of a new document.</param>
        /// <param name="rangeEndIdentifier">The range end identifier. Identifier examples: id1.0.0, id0.0.0:end, page1, page1:end, document:end.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::SaveAsRangeOnlineResponse> saveAsRangeOnline(std::shared_ptr<aspose::words::cloud::requests::SaveAsRangeOnlineRequest> request);

        /// <summary>
        /// Converts a document in cloud storage to TIFF format using detailed conversion settings.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="saveOptions">Tiff save options.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="useAntiAliasing">The flag indicating whether to use antialiasing.</param>
        /// <param name="useHighQualityRendering">The flag indicating whether to use high quality.</param>
        /// <param name="imageBrightness">The level of brightness for the generated images.</param>
        /// <param name="imageColorMode">The color mode for the generated images.</param>
        /// <param name="imageContrast">The contrast for the generated images.</param>
        /// <param name="numeralFormat">The images numeral format.</param>
        /// <param name="pageCount">The number of pages to render.</param>
        /// <param name="pageIndex">The index of the page to start rendering.</param>
        /// <param name="paperColor">The background image color.</param>
        /// <param name="pixelFormat">The pixel format of the generated images.</param>
        /// <param name="resolution">The resolution of the generated images.</param>
        /// <param name="scale">The zoom factor for the generated images.</param>
        /// <param name="tiffCompression">The compression tipe.</param>
        /// <param name="dmlRenderingMode">The optional dml rendering mode. The default value is Fallback.</param>
        /// <param name="dmlEffectsRenderingMode">The optional dml effects rendering mode. The default value is Simplified.</param>
        /// <param name="tiffBinarizationMethod">The optional TIFF binarization method. Possible values are: FloydSteinbergDithering, Threshold.</param>
        /// <param name="zipOutput">The flag indicating whether to ZIP the output.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        [[deprecated("This operation will be removed in the future.")]]
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SaveResponse > saveAsTiff(std::shared_ptr<aspose::words::cloud::requests::SaveAsTiffRequest> request);

        /// <summary>
        /// Converts a document in cloud storage to TIFF format using detailed conversion settings.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="saveOptions">Tiff save options.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="useAntiAliasing">The flag indicating whether to use antialiasing.</param>
        /// <param name="useHighQualityRendering">The flag indicating whether to use high quality.</param>
        /// <param name="imageBrightness">The level of brightness for the generated images.</param>
        /// <param name="imageColorMode">The color mode for the generated images.</param>
        /// <param name="imageContrast">The contrast for the generated images.</param>
        /// <param name="numeralFormat">The images numeral format.</param>
        /// <param name="pageCount">The number of pages to render.</param>
        /// <param name="pageIndex">The index of the page to start rendering.</param>
        /// <param name="paperColor">The background image color.</param>
        /// <param name="pixelFormat">The pixel format of the generated images.</param>
        /// <param name="resolution">The resolution of the generated images.</param>
        /// <param name="scale">The zoom factor for the generated images.</param>
        /// <param name="tiffCompression">The compression tipe.</param>
        /// <param name="dmlRenderingMode">The optional dml rendering mode. The default value is Fallback.</param>
        /// <param name="dmlEffectsRenderingMode">The optional dml effects rendering mode. The default value is Simplified.</param>
        /// <param name="tiffBinarizationMethod">The optional TIFF binarization method. Possible values are: FloydSteinbergDithering, Threshold.</param>
        /// <param name="zipOutput">The flag indicating whether to ZIP the output.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        [[deprecated("This operation will be removed in the future.")]]
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::SaveAsTiffOnlineResponse> saveAsTiffOnline(std::shared_ptr<aspose::words::cloud::requests::SaveAsTiffOnlineRequest> request);

        /// <summary>
        /// Searches text, specified by the regular expression, in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="pattern">The regular expression used to find matches.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SearchResponse > search(std::shared_ptr<aspose::words::cloud::requests::SearchRequest> request);

        /// <summary>
        /// Searches text, specified by the regular expression, in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="pattern">The regular expression used to find matches.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SearchResponse > searchOnline(std::shared_ptr<aspose::words::cloud::requests::SearchOnlineRequest> request);

        /// <summary>
        /// Signs the document with given certificate.
        /// </summary>
        /// <param name="name">Name of the document to sign.</param>
        /// <param name="certificatePath">certificate file path.</param>
        /// <param name="certificatePassword">certificate password.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > signDocument(std::shared_ptr<aspose::words::cloud::requests::SignDocumentRequest> request);

        /// <summary>
        /// Signs the document with given certificate.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="certificatePath">certificate file path.</param>
        /// <param name="certificatePassword">certificate password.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::SignDocumentOnlineResponse> signDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::SignDocumentOnlineRequest> request);

        /// <summary>
        /// Splits a document into parts and saves them in the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The format to split.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="from">The start page.</param>
        /// <param name="to">The end page.</param>
        /// <param name="zipOutput">The flag indicating whether to ZIP the output.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SplitDocumentResponse > splitDocument(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentRequest> request);

        /// <summary>
        /// Splits a document into parts and saves them in the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The format to split.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="from">The start page.</param>
        /// <param name="to">The end page.</param>
        /// <param name="zipOutput">The flag indicating whether to ZIP the output.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::SplitDocumentResponse > > > splitDocumentJob(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentJobRequest> request);

        /// <summary>
        /// Splits a document into parts and saves them in the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="format">The format to split.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="from">The start page.</param>
        /// <param name="to">The end page.</param>
        /// <param name="zipOutput">The flag indicating whether to ZIP the output.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::SplitDocumentOnlineResponse> splitDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentOnlineRequest> request);

        /// <summary>
        /// Splits a document into parts and saves them in the specified format.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="format">The format to split.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="from">The start page.</param>
        /// <param name="to">The end page.</param>
        /// <param name="zipOutput">The flag indicating whether to ZIP the output.</param>
        /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr<aspose::words::cloud::responses::SplitDocumentOnlineResponse> > > splitDocumentOnlineJob(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentOnlineJobRequest> request);

        /// <summary>
        /// Translate a node id to a node path.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="nodeId">The node identifier. Identifier examples: id0.0.0.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TranslateNodeIdResponse > translateNodeId(std::shared_ptr<aspose::words::cloud::requests::TranslateNodeIdRequest> request);

        /// <summary>
        /// Translate a node id to a node path.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="nodeId">The node identifier. Identifier examples: id0.0.0.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TranslateNodeIdResponse > translateNodeIdOnline(std::shared_ptr<aspose::words::cloud::requests::TranslateNodeIdOnlineRequest> request);

        /// <summary>
        /// Removes protection from the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > unprotectDocument(std::shared_ptr<aspose::words::cloud::requests::UnprotectDocumentRequest> request);

        /// <summary>
        /// Removes protection from the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UnprotectDocumentOnlineResponse> unprotectDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::UnprotectDocumentOnlineRequest> request);

        /// <summary>
        /// Updates a bookmark in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="bookmarkName">The name of the bookmark.</param>
        /// <param name="bookmarkData">Bookmark data.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > updateBookmark(std::shared_ptr<aspose::words::cloud::requests::UpdateBookmarkRequest> request);

        /// <summary>
        /// Updates a bookmark in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="bookmarkName">The name of the bookmark.</param>
        /// <param name="bookmarkData">Bookmark data.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateBookmarkOnlineResponse> updateBookmarkOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateBookmarkOnlineRequest> request);

        /// <summary>
        /// Updates a border in the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="borderType">Border type.</param>
        /// <param name="borderProperties">Border properties.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::BorderResponse > updateBorder(std::shared_ptr<aspose::words::cloud::requests::UpdateBorderRequest> request);

        /// <summary>
        /// Updates a border in the document node.
        /// The 'nodePath' parameter should refer to a paragraph, a cell or a row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="borderProperties">Border properties.</param>
        /// <param name="borderType">Border type.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateBorderOnlineResponse> updateBorderOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateBorderOnlineRequest> request);

        /// <summary>
        /// Updates a comment in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="commentIndex">The index of the comment.</param>
        /// <param name="comment">Comment data.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CommentResponse > updateComment(std::shared_ptr<aspose::words::cloud::requests::UpdateCommentRequest> request);

        /// <summary>
        /// Updates a comment in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="commentIndex">The index of the comment.</param>
        /// <param name="comment">Comment data.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateCommentOnlineResponse> updateCommentOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateCommentOnlineRequest> request);

        /// <summary>
        /// Updates the custom xml part in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="customXmlPartIndex">The index of the custom xml part. This index is the number of the entry in the collection of custom xml parts, not the ID of the part.</param>
        /// <param name="customXmlPart">Custom xml part.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > updateCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::UpdateCustomXmlPartRequest> request);

        /// <summary>
        /// Updates the custom xml part in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="customXmlPartIndex">The index of the custom xml part. This index is the number of the entry in the collection of custom xml parts, not the ID of the part.</param>
        /// <param name="customXmlPart">Custom xml part.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateCustomXmlPartOnlineResponse> updateCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateCustomXmlPartOnlineRequest> request);

        /// <summary>
        /// Updates a DrawingObject in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="drawingObject">Drawing object parameters.</param>
        /// <param name="imageFile">File with image.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > updateDrawingObject(std::shared_ptr<aspose::words::cloud::requests::UpdateDrawingObjectRequest> request);

        /// <summary>
        /// Updates a DrawingObject in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="drawingObject">Drawing object parameters.</param>
        /// <param name="imageFile">File with image.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateDrawingObjectOnlineResponse> updateDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateDrawingObjectOnlineRequest> request);

        /// <summary>
        /// Updates a field in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="field">Field data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FieldResponse > updateField(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldRequest> request);

        /// <summary>
        /// Updates a field in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="field">Field data.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateFieldOnlineResponse> updateFieldOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldOnlineRequest> request);

        /// <summary>
        /// Reevaluates field values in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DocumentResponse > updateFields(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldsRequest> request);

        /// <summary>
        /// Reevaluates field values in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateFieldsOnlineResponse> updateFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldsOnlineRequest> request);

        /// <summary>
        /// Updates a footnote in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="footnoteDto">Footnote data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > updateFootnote(std::shared_ptr<aspose::words::cloud::requests::UpdateFootnoteRequest> request);

        /// <summary>
        /// Updates a footnote in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="footnoteDto">Footnote data.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateFootnoteOnlineResponse> updateFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFootnoteOnlineRequest> request);

        /// <summary>
        /// Updates a form field in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="formField">From field data.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > updateFormField(std::shared_ptr<aspose::words::cloud::requests::UpdateFormFieldRequest> request);

        /// <summary>
        /// Updates a form field in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="formField">From field data.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateFormFieldOnlineResponse> updateFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFormFieldOnlineRequest> request);

        /// <summary>
        /// Updates a list in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="listId">The list Id.</param>
        /// <param name="listUpdate">List object.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ListResponse > updateList(std::shared_ptr<aspose::words::cloud::requests::UpdateListRequest> request);

        /// <summary>
        /// Updates the level of a List element in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="listId">The list Id.</param>
        /// <param name="listLevel">The list level.</param>
        /// <param name="listUpdate">List object.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ListResponse > updateListLevel(std::shared_ptr<aspose::words::cloud::requests::UpdateListLevelRequest> request);

        /// <summary>
        /// Updates the level of a List element in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="listId">The list Id.</param>
        /// <param name="listUpdate">List object.</param>
        /// <param name="listLevel">The list level.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateListLevelOnlineResponse> updateListLevelOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateListLevelOnlineRequest> request);

        /// <summary>
        /// Updates a list in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="listId">The list Id.</param>
        /// <param name="listUpdate">List object.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateListOnlineResponse> updateListOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateListOnlineRequest> request);

        /// <summary>
        /// Updates the formatting properties of a paragraph in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="paragraphFormatDto">Dto for paragraph format update.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > updateParagraphFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphFormatRequest> request);

        /// <summary>
        /// Updates the formatting properties of a paragraph in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraphFormatDto">Dto for paragraph format update.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateParagraphFormatOnlineResponse> updateParagraphFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphFormatOnlineRequest> request);

        /// <summary>
        /// Updates the formatting properties of a paragraph list in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="listFormatDto">ListFormatUpdate dto.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > updateParagraphListFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphListFormatRequest> request);

        /// <summary>
        /// Updates the formatting properties of a paragraph list in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="listFormatDto">ListFormatUpdate dto.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateParagraphListFormatOnlineResponse> updateParagraphListFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphListFormatOnlineRequest> request);

        /// <summary>
        /// Updates a Run object in the paragraph.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="run">Run data.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::RunResponse > updateRun(std::shared_ptr<aspose::words::cloud::requests::UpdateRunRequest> request);

        /// <summary>
        /// Updates the font properties of a Run object in the paragraph.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="fontDto">Font dto object.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FontResponse > updateRunFont(std::shared_ptr<aspose::words::cloud::requests::UpdateRunFontRequest> request);

        /// <summary>
        /// Updates the font properties of a Run object in the paragraph.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="fontDto">Font dto object.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateRunFontOnlineResponse> updateRunFontOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateRunFontOnlineRequest> request);

        /// <summary>
        /// Updates a Run object in the paragraph.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="paragraphPath">The path to the paragraph in the document tree.</param>
        /// <param name="run">Run data.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateRunOnlineResponse> updateRunOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateRunOnlineRequest> request);

        /// <summary>
        /// Updates the page setup of a section in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="pageSetup">Page setup properties dto.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > updateSectionPageSetup(std::shared_ptr<aspose::words::cloud::requests::UpdateSectionPageSetupRequest> request);

        /// <summary>
        /// Updates the page setup of a section in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="sectionIndex">The index of the section.</param>
        /// <param name="pageSetup">Page setup properties dto.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateSectionPageSetupOnlineResponse> updateSectionPageSetupOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateSectionPageSetupOnlineRequest> request);

        /// <summary>
        /// Updates a StructuredDocumentTag (SDT) in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="structuredDocumentTag">Structured document tag parameters.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > updateStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::UpdateStructuredDocumentTagRequest> request);

        /// <summary>
        /// Updates a StructuredDocumentTag (SDT) in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="structuredDocumentTag">Structured document tag parameters.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateStructuredDocumentTagOnlineResponse> updateStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateStructuredDocumentTagOnlineRequest> request);

        /// <summary>
        /// Updates a style in the document.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="styleName">The name of the style.</param>
        /// <param name="styleUpdate">Style properties to update.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::StyleResponse > updateStyle(std::shared_ptr<aspose::words::cloud::requests::UpdateStyleRequest> request);

        /// <summary>
        /// Updates a style in the document.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="styleName">The name of the style.</param>
        /// <param name="styleUpdate">Style properties to update.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateStyleOnlineResponse> updateStyleOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateStyleOnlineRequest> request);

        /// <summary>
        /// Updates the formatting properties of a cell in the table row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="format">The properties.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > updateTableCellFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateTableCellFormatRequest> request);

        /// <summary>
        /// Updates the formatting properties of a cell in the table row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tableRowPath">The path to the table row in the document tree.</param>
        /// <param name="format">The properties.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateTableCellFormatOnlineResponse> updateTableCellFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateTableCellFormatOnlineRequest> request);

        /// <summary>
        /// Updates properties of a table in the document node.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="index">Object index.</param>
        /// <param name="properties">The properties.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > updateTableProperties(std::shared_ptr<aspose::words::cloud::requests::UpdateTablePropertiesRequest> request);

        /// <summary>
        /// Updates properties of a table in the document node.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="properties">The properties.</param>
        /// <param name="index">Object index.</param>
        /// <param name="nodePath">The path to the node in the document tree.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateTablePropertiesOnlineResponse> updateTablePropertiesOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateTablePropertiesOnlineRequest> request);

        /// <summary>
        /// Updates the formatting properties of a table row.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="index">Object index.</param>
        /// <param name="format">Table row format.</param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storage">Original document storage.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > updateTableRowFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateTableRowFormatRequest> request);

        /// <summary>
        /// Updates the formatting properties of a table row.
        /// </summary>
        /// <param name="document">The document.</param>
        /// <param name="tablePath">The path to the table in the document tree.</param>
        /// <param name="format">Table row format.</param>
        /// <param name="index">Object index.</param>
        /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        /// <param name="password">Password of protected Word document. Use the parameter to pass a password via SDK. SDK encrypts it automatically. We don't recommend to use the parameter to pass a plain password for direct call of API.</param>
        /// <param name="encryptedPassword">Password of protected Word document. Use the parameter to pass an encrypted password for direct calls of API. See SDK code for encyption details.</param>
        /// <param name="openTypeSupport">The value indicates whether OpenType support is on.</param>
        /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::UpdateTableRowFormatOnlineResponse> updateTableRowFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateTableRowFormatOnlineRequest> request);

        /// <summary>
        /// Upload file.
        /// </summary>
        /// <param name="fileContent">File to upload.</param>
        /// <param name="path">Path where to upload including filename and extension e.g. /file.ext or /Folder 1/file.ext If the content is multipart and path does not contains the file name it tries to get them from filename parameter from Content-Disposition header.</param>
        /// <param name="storageName">Storage name.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::FilesUploadResult > uploadFile(std::shared_ptr<aspose::words::cloud::requests::UploadFileRequest> request);

        /// <summary>
        /// The batching technique comprises both concurrent and sequential request processing,
        /// where concurrent requests can be processed in an arbitrary order with the same result,
        /// and sequential requests depend on being processed step-by-step.
        /// There is no restriction on the number of inner requests inside a single batch request.
        /// </summary>
        /// <param name="requests">List of batch requests.</param>
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr<aspose::words::cloud::responses::BatchResponse> batch(const std::vector<aspose::words::cloud::requests::BatchRequest>& requests, bool displayIntermediateResults = true);

    public:
        ASPOSE_WORDS_CLOUD_EXPORT WordsApi(std::shared_ptr<ApiConfiguration> configuration);
        ASPOSE_WORDS_CLOUD_EXPORT virtual ~WordsApi() = default;

    private:
        std::shared_ptr<ApiClient> m_ApiClient;
    };
}
