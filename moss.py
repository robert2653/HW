import mosspy
from dotenv import load_dotenv
import os

load_dotenv()


userid = os.getenv("MOSSID")
folder = "week05/B/"

m = mosspy.Moss(userid, "python")



# Submission Files
m.addFilesByWildcard(folder + "*.c")

url = m.send() # Submission Report URL


with open(folder + "link.txt", "w") as f:
  f.write("Report Url: " + url)

# Save report file
m.saveWebPage(url, folder +  "report.html")

# Download whole report locally including code diff links
mosspy.download_report(url, folder +  "report/", connections=8)