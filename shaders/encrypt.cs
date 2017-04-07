using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace shaders
{
    class Program
    {
        static void Main(string[] args)
        {
            var files = Directory.GetFiles("shaders");

            foreach (var file in files)
                EncryptShader(file, file + ".caesar3");
        }

        static void EncryptShader(string input, string output)
        {
            try
            {
                var inputShader = new FileStream(input, FileMode.Open);
                var outputShader = new FileStream(output, FileMode.Create);

                for (int i = 0; i < inputShader.Length; i++)
                {
                    byte x = (byte)inputShader.ReadByte();
                    x = (byte)(x + 3);
                    outputShader.WriteByte(x);
                }

                inputShader.Close();
                outputShader.Close();

            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
            }
        }
    }
}
