// Each entry = 4 byte = 32 pixel
// Corne OLED 32x128

static const char PROGMEM logo[4] = {
    0x80, 0x81, 0x82, 0x83, //row0
    0x80, 0x81, 0x82, 0x83, //row1
    0x80, 0x81, 0x82, 0x83, //row2
    0x80, 0x81, 0x82, 0x83 //row3
};

/**
 * 
 * @param shifts signed integer which indicates how many bits get moved and in which direction
*/
static void shift_row(char* array_to_shift, char* array_result, uint8_t row_length, uint8_t row_id, uint8_t rows, int shifts) {
    // test if row length is plausible
    if((sizeof(&array)/sizeof(uint8_t)) % row_length != 0) return;

    // don't check here if all rows can be shifted, just skip the remaining rows

    for (uint8_t shifted_row = row_id; shifted_row < row_id + rows; shifted_row++)
    {
        // check if row is still in array
        if (sizeof(shifted_row >= array_to_shift)/sizeof(uint8_t)) return;
        
        // shift
        for (uint8_t column = 0; column < row_length; column++)
        {
            if (shifts < 0)
            {
                array_result[shifted_row + column] = array_to_shift[shifted_row + column] << shifts * -1;
            } else if (shifts > 0)
            {
                array_result[shifted_row + column] = array_to_shift[shifted_row + column] << shifts;
            } else
            {
                return;
            }
            
            // Still TODO!
            // so far this code is junk and just basicly what I had in mind. This probably won't compile!
            
        }
        
        
    }
    
}

