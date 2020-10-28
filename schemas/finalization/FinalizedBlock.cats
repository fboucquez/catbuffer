import "types.cats"

# binary layout for finalization round
struct FinalizationRound
	# finalization epoch
	epoch = FinalizationEpoch

	# finalization point
	point = FinalizationPoint

# binary layout for finalization block header
struct FinalizedBlock
	# finalization round
	round = FinalizationRound

	# block height
	height = Height

	# proof hash
	hash = Hash256