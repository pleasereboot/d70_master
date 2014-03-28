<?php
/**
 * @file
 * contact_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function contact_form_default_rules_configuration() {
  $items = array();
  $items['rules_contact_send_mail_to_admin'] = entity_import('rules_config', '{ "rules_contact_send_mail_to_admin" : {
      "LABEL" : "contact - send mail to admin",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "contact", "entityform", "mail" ],
      "REQUIRES" : [ "rules_i18n", "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "fonderie art \\u003Cfonderie@ivic.qc.ca\\u003E,yannick@tmdesign.ca",
            "subject" : "New message from contact form",
            "message" : "Nom : [entityform:field_full_name]\\r\\nCourriel : [entityform:field_email]\\r\\nT\\u00e9l\\u00e9phone : [entityform:field_phone]\\r\\nSujet : [entityform:field_subject]\\r\\nMessage : [entityform:field_message]",
            "from" : "fonderie art \\u003Cfonderie@ivic.qc.ca\\u003E",
            "language" : [ "entityform:user:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
