from cs50 import get_int
from csv import DictReader


def main():
    min_tempo = get_int("Minimum tempo: ")
    max_tempo = get_int("Maximum tempo: ")

    playlist = []
    filename = "2018_top100.csv"
    # TODO: Read songs from 2018_top100.csv into playlist
    with open(filename) as file:
        file_reader = DictReader(file)
        for song in file_reader:
            if float(song["tempo"]) > min_tempo and float(song["tempo"]) < max_tempo:
                playlist.append(song["name"])

    # TODO: Print song titles from playlist
    for song in playlist:
        print(song)

main()
