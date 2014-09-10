<table border="0" cellpadding="0" cellspacing="0" class="blue-line" width="100%">
  <tbody>
    <tr>
      <td width="100%" style="background-color:#003399; height: 4px;" valign="top"></td>
    </tr>
  </tbody>
</table>
<table border="0" cellpadding="10" cellspacing="0" class="category-name" width="100%" style="border-style: dotted; border-bottom-width: 2px; border-top-width: 0px; border-left-width: 0px; border-right-width: 0px;  border-color: #CFDDEE;">
  <tbody>
    <tr>
      <td style="font-family: Oswald, Arial, sans-serif; font-weight: normal; font-size: 20px; padding-left: 0px; padding-right: 0px;">
        <?php
          if (isset($name_field[$language])) {
            print($name_field[$language][0]['safe_value']);
            } else {
              print($name_field[0]['safe_value']);
          }
        ?>
      </td>
    </tr>
  </tbody>
</table>
<div style="width: 100%; height: 10px;"></div>