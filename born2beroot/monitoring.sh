clear

arch=$(uname -a)
physical_cpu=$(cat /proc/cpuinfo | grep "physical id"  | sort | uniq | wc -l)
get_ram_usage=$(free -h | grep "Mem:" | awk '{fprint($2)}')
get_ram_total=$()

sudo wall "
                System Monitoring Info
        #Architecture: $arch
        #pCPU: $physical_cpu | vCPU: $physical_cpu
        #Memory Usage:$get_ram_usage
    "