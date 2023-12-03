import unittest
from unittest.mock import create_autospec, patch

from cockdb import method


class MyTest(unittest.TestCase):
    # def test_something(self):
    #     with patch.object(method, 'method') as mock_method:
    #         mock_method.return_value = 4
    #         s = method()
    #         s.methods(8)
    #     mock_method.assert_called_with(8)
    @patch('cockdb.method')
    def test_method(self, mock_method):
        mock_method = create_autospec(method, return_value=[1, 2, 3, 4])
        mock_method([1, 2, 3, 4])
        mock_method.assert_called_once_with([1, 2, 3, 4])