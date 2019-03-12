<?php
//*²âÊÔtravis-ciµÄphp½Å±¾
class Say
{
	public static $param = [];
	public static $data = [];

	public static function get($key){
		return self::$para[$key];
	}

	public static function error($errNo=999, $errMsg=''){
		exit($errNo.':'.$errMsg);
	}
}
$a = Say::get('a');
$e = Say::error(1, '¿ò¼Ü´íÎó');