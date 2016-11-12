import unittest
import subprocess
import sys
import re


def hamming_distance_from_stdout(stdout):
    m = re.search('.*Hamming distance is ([0-9]+).*', str(stdout))
    return int(m.group(1))


class HammingDistanceAppTestCase(unittest.TestCase):
    PROGRAM = ""

    def test_something(self):
        cp = subprocess.run([self.PROGRAM, "100", "001"], stdout=subprocess.PIPE)
        self.assertEqual(2, hamming_distance_from_stdout(cp.stdout))

    def test_valid_blobs(self):
        cp = subprocess.run([self.PROGRAM, "01101010", "11011011"], stdout=subprocess.PIPE)
        self.assertEqual(4, hamming_distance_from_stdout(cp.stdout))


if __name__ == '__main__':
    HammingDistanceAppTestCase.PROGRAM = sys.argv[1]
    sys.argv = sys.argv[:1]
    unittest.main()
