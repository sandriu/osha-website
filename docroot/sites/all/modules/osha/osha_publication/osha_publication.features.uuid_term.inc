<?php
/**
 * @file
 * osha_publication.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function osha_publication_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Evaluation reports',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'evaluation_reports',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Доклади за оценка',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Hodnotící zprávy',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Evalueringsrapporter',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Bewertungsberichte',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Εκθέσεις αξιολόγησης',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Evaluation reports',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Informes de evaluación',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Hindamisaruanded',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Arviointikertomukset',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Rapports d\'évaluation',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Evaluation reports',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Értékelő jelentések',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Evaluation reports',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Relazioni di valutazione',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Vertinimo ataskaitos',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Novērtējuma ziņojumi',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Rapporti ta\' evalwazzjoni',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Evaluatierapporten',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Evaluation reports',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Raporty oceniające',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Relatórios de avaliação',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Rapoarte de evaluare',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Hodnotiace správy',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Ocenjevalna poročila',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Utvärderingsrapporter',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Evaluation reports',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '01207304-f92c-4964-9c37-af3b27565c80',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Corporate publications',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'corporate',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Корпоративни публикации',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Publikace agentury',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Publikationer fra agenturet',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Agenturveröffentlichungen',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Δημοσιεύσεις του Οργανισμού',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Corporate publications',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Publicaciones corporativas',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'EU-OSHA väljaanded',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Viraston julkaisut',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Publications institutionnelles',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Corporate publications',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Vállalati kiadványok',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Corporate publications',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Pubblicazioni istituzionali',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Instituciniai leidiniai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Iestādes publikācijas',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Pubblikazzjonijiet korporattivi',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Publicaties',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Corporate publications',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Publikacje dotyczące Agencji',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Publicações institucionais',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Publicaţii instituţionale',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Publikácie agentúry',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Publikacije o agenciji',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Gemensamma publikationer',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Corporate publications',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '1fa9892c-e286-4854-b83d-3cbc44906186',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Promotional Material',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'promotional_material',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Рекламни материали',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Propagační materiály',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Reklamemateriale',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Werbematerial',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Υλικά προώθησης',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Promotional Material',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Material promocional',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Reklaammaterjalid',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Esittelymateriaali',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Supports promotionnels',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Promotional Material',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Promóciós anyagok',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Promotional Material',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Materiale promozionale',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Reklaminė medžiaga',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Reklāmas materiāli',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Materjal ta\' Promozzjoni',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'PR-materiaal',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Promotional Material',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Materiały promocyjne',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Material promocional',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Materiale promoţionale',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Propagačný materiál',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Promocijsko gradivo',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Reklammaterial',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Promotional Material',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '22efe395-0482-4972-b26b-c37ca5c706fe',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Magazine',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'magazine',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Списание',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Časopis',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Περιοδικό',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Revista',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Ajakirjad',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Magazin',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Rivista',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Žurnalai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Žurnāls',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Rivista',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Magazyny',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Reviste',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Časopis',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Revija',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Magazine',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '28580065-b305-48c7-b0c1-a3e4201f2a6e',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Literature reviews',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'literature_reviews',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Прегледи на литературата',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Přehledy literatury ',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Litteraturgennemgang',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Literaturdurchsichten',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Επισκοπήσεις της βιβλιογραφίας',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Literature reviews',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Revisiones bibliográficas',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Kirjandusülevaated',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Kirjallisuuskatsaukset',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Analyses bibliographiques',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Literature reviews',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Szakirodalmi áttekintés',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Literature reviews',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Rassegne della letteratura',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Literatūros apžvalgos',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Literatūras apskati',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Analiżi tal-litteratura',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Literatuurbesprekingen',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Literature reviews',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Przeglądy literatury',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Recensões bibliográficas',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Studii ale literaturii de specialitate',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Prehľady literatúry',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Pregledi literature',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Litteraturöversikter',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Literature reviews',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '41dbd88b-7160-44d0-98bf-ee3b52610590',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'E-facts',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'e-facts',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Електронни факти',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Elektronická fakta',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'E-fakta',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'E-facts ',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'E-tájékoztatók',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'E. faktai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'E-fakti',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Fatti elettroniċi',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'E-fakty',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Fişe informative electronice',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Informácie online',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'E-fakta',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'E-facts',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '5b4bb972-73f5-4d9c-b812-65b6f642d5f0',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Factsheets',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'factsheets',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Фактологични справки',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Informační listy',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Faktablade',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Factsheets',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Τεχνικά δελτία',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Factsheets',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Hojas informativas',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Teabelehed',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Factsheet-tiedotteet',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Fiches d\'informations',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Factsheets',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Tájékoztatók',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Factsheets',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Factsheet',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Informaciniai biuleteniai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Faktu lapas',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Skedi informattivi',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Factsheets',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Factsheets',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Biuletyn „Fakty”',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Fichas técnicas',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Fişe informative',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Informačné letáky',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Informativni bilteni',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Faktablad',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Factsheets',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => '622be824-cb95-4944-84f2-69f99079b6b1',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Case studies',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'case_studies',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Проучвания на отделни случаи',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Případové studie',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Casestudier',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Lösungen',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Περιπτωσιολογικές μελέτες',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Case studies',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Casos de estudio',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Juhtumiuuringud',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Tapaustutkimukset',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Études de cas',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Esettanulmányok',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Esettanulmányok',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Raundæmi',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Studi di casi concreti',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Atvejų tyrimai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Problēmsituāciju analīze',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Studji tal-Każijiet',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Casestudies',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Case-studier',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Studia przypadku',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Estudos de casos',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Studii de caz',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Prípadové štúdie',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Študije primerov',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Fallstudier',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Case studies',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'b866d484-61a7-4343-83b3-3c718e691b56',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Articles',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'articles',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Статии',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Články',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Artikler',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Artikel',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Άρθρα',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Articles',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Artículos',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Artiklid',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Artikkeleita',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Articles',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Articles',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Cikkek',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Articles',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Articoli',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Straipsniai',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Raksti',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Artikli',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Artikelen',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Articles',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Artykuły',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Artigos',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Articole',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Články',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Članki',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Artiklar',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Articles',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'd47ccb97-431d-4be2-ac4b-93d79afc7153',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Reports',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'publication_types',
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_publication_type_code' => array(
      'und' => array(
        0 => array(
          'value' => 'reports',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'bg' => array(
        0 => array(
          'value' => 'Доклади',
          'format' => NULL,
        ),
      ),
      'cs' => array(
        0 => array(
          'value' => 'Zprávy',
          'format' => NULL,
        ),
      ),
      'da' => array(
        0 => array(
          'value' => 'Rapporter',
          'format' => NULL,
        ),
      ),
      'de' => array(
        0 => array(
          'value' => 'Berichte',
          'format' => NULL,
        ),
      ),
      'el' => array(
        0 => array(
          'value' => 'Εκθέσεις',
          'format' => NULL,
        ),
      ),
      'en' => array(
        0 => array(
          'value' => 'Reports',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Informes',
          'format' => NULL,
        ),
      ),
      'et' => array(
        0 => array(
          'value' => 'Aruanded',
          'format' => NULL,
        ),
      ),
      'fi' => array(
        0 => array(
          'value' => 'Raportit',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Rapports',
          'format' => NULL,
        ),
      ),
      'hr' => array(
        0 => array(
          'value' => 'Reports',
          'format' => NULL,
        ),
      ),
      'hu' => array(
        0 => array(
          'value' => 'Jelentések',
          'format' => NULL,
        ),
      ),
      'is' => array(
        0 => array(
          'value' => 'Reports',
          'format' => NULL,
        ),
      ),
      'it' => array(
        0 => array(
          'value' => 'Relazioni',
          'format' => NULL,
        ),
      ),
      'lt' => array(
        0 => array(
          'value' => 'Ataskaitos',
          'format' => NULL,
        ),
      ),
      'lv' => array(
        0 => array(
          'value' => 'Ziņojumi',
          'format' => NULL,
        ),
      ),
      'mt' => array(
        0 => array(
          'value' => 'Rapporti',
          'format' => NULL,
        ),
      ),
      'nl' => array(
        0 => array(
          'value' => 'Rapporten',
          'format' => NULL,
        ),
      ),
      'no' => array(
        0 => array(
          'value' => 'Reports',
          'format' => NULL,
        ),
      ),
      'pl' => array(
        0 => array(
          'value' => 'Raporty',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Relatórios',
          'format' => NULL,
        ),
      ),
      'ro' => array(
        0 => array(
          'value' => 'Rapoarte',
          'format' => NULL,
        ),
      ),
      'sk' => array(
        0 => array(
          'value' => 'Správy',
          'format' => NULL,
        ),
      ),
      'sl' => array(
        0 => array(
          'value' => 'Poročila',
          'format' => NULL,
        ),
      ),
      'sv' => array(
        0 => array(
          'value' => 'Rapporter',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Reports',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'bg' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'bg',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'lv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'lv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'mt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'mt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'nl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'nl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'no' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'no',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'ro' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'ro',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sk' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sk',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sl' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sl',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'it' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'it',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'is' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'is',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'cs' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'cs',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'da' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'da',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'de' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'de',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'el' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'el',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'et' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'et',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fi' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fi',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'hu' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'hu',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
        'sv' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'sv',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1411397690,
          'entity_uuid' => 'dc977ff6-ab98-433a-a1dd-79295fca4beb',
          'user_uuid' => '22a71771-c8b3-4537-9799-05790128120a',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
