<?php

namespace App\Models;
class agent{
    public static function ismobile(): bool
    {
        $GET_agent_ios=count(explode("iPhone",Request()))>=2;
        $GET_agent_android=count(explode("Linux",Request()))>=2;
        if($GET_agent_ios||$GET_agent_android) return true;
        return false;
    }
}
