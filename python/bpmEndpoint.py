import requests

class CamundaBPMEndpoint():
    def __init__(self, bpm_base_url) -> None:
        self._res = requests.get(bpm_base_url, )