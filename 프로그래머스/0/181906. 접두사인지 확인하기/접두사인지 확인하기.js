function solution(my_string, is_prefix) {
    for(let i = 0; i < my_string.length; i++){
        let str = '';
        str = my_string.substring(0,i+1);
        
        if(str == is_prefix) return 1;
    }
    return 0;
}