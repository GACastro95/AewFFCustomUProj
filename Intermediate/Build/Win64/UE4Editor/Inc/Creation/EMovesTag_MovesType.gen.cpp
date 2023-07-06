// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesTag_MovesType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesTag_MovesType() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_MovesType();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesTag_MovesType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesTag_MovesType, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesTag_MovesType"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesTag_MovesType>()
	{
		return EMovesTag_MovesType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesTag_MovesType(EMovesTag_MovesType_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesTag_MovesType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesTag_MovesType_Hash() { return 2420537799U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesTag_MovesType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesTag_MovesType"), 0, Get_Z_Construct_UEnum_Creation_EMovesTag_MovesType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesTag_MovesType::PEEK_ADDED_DEFAULT", (int64)EMovesTag_MovesType::PEEK_ADDED_DEFAULT },
				{ "EMovesTag_MovesType::MV_DDT", (int64)EMovesTag_MovesType::MV_DDT },
				{ "EMovesTag_MovesType::MV_Powerbomb", (int64)EMovesTag_MovesType::MV_Powerbomb },
				{ "EMovesTag_MovesType::MV_Hurricanerana", (int64)EMovesTag_MovesType::MV_Hurricanerana },
				{ "EMovesTag_MovesType::MV_Suplex", (int64)EMovesTag_MovesType::MV_Suplex },
				{ "EMovesTag_MovesType::MV_Slam", (int64)EMovesTag_MovesType::MV_Slam },
				{ "EMovesTag_MovesType::MV_Drop", (int64)EMovesTag_MovesType::MV_Drop },
				{ "EMovesTag_MovesType::MV_Piledriver", (int64)EMovesTag_MovesType::MV_Piledriver },
				{ "EMovesTag_MovesType::MV_Backbreaker", (int64)EMovesTag_MovesType::MV_Backbreaker },
				{ "EMovesTag_MovesType::MV_MAX", (int64)EMovesTag_MovesType::MV_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMovesTag_MovesType.h" },
				{ "MV_Backbreaker.Name", "EMovesTag_MovesType::MV_Backbreaker" },
				{ "MV_DDT.Name", "EMovesTag_MovesType::MV_DDT" },
				{ "MV_Drop.Name", "EMovesTag_MovesType::MV_Drop" },
				{ "MV_Hurricanerana.Name", "EMovesTag_MovesType::MV_Hurricanerana" },
				{ "MV_MAX.Hidden", "" },
				{ "MV_MAX.Name", "EMovesTag_MovesType::MV_MAX" },
				{ "MV_Piledriver.Name", "EMovesTag_MovesType::MV_Piledriver" },
				{ "MV_Powerbomb.Name", "EMovesTag_MovesType::MV_Powerbomb" },
				{ "MV_Slam.Name", "EMovesTag_MovesType::MV_Slam" },
				{ "MV_Suplex.Name", "EMovesTag_MovesType::MV_Suplex" },
				{ "PEEK_ADDED_DEFAULT.Name", "EMovesTag_MovesType::PEEK_ADDED_DEFAULT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesTag_MovesType",
				"EMovesTag_MovesType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif