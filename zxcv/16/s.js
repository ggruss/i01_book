$(document).ready(function() {
   $("#datepicker").datepicker();
   $("#datepicker1").datepicker({
      monthNames:["Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь"],
      dayNamesMin:["Вс","Пн","Вт","Ср","Чт","Пт","Сб"],
      firstDay:1,
      dateFormat:"dd.mm.yy"
   });
});