import "types.cats"
import "finalization/finalization_round.cats"

# binary layout for packed finalized block header
struct PackedFinalizedBlockHeader
	# finalization round
	round = FinalizationRound

	# block height
	height = Height

	# proof hash
	hash = Hash256