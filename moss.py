import mosspy

# 476017450
# 913322459
# 54755698
userid = 913322459

folder = "week01/D/"

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