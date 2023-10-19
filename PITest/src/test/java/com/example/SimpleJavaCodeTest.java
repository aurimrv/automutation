package com.example;
import org.junit.Test;
import static org.junit.Assert.assertEquals;
import com.example.SimpleJavaCode;

public class SimpleJavaCodeTest {
    @Test
    public void testAdd() {
        SimpleJavaCode calculator = new SimpleJavaCode();
        int result = calculator.add(2, 3);
        assertEquals(5, result);
    }
}
