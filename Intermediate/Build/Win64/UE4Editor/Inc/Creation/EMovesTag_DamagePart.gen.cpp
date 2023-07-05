// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesTag_DamagePart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesTag_DamagePart() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_DamagePart();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesTag_DamagePart_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesTag_DamagePart, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesTag_DamagePart"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesTag_DamagePart>()
	{
		return EMovesTag_DamagePart_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesTag_DamagePart(EMovesTag_DamagePart_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesTag_DamagePart"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesTag_DamagePart_Hash() { return 2376547131U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesTag_DamagePart()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesTag_DamagePart"), 0, Get_Z_Construct_UEnum_Creation_EMovesTag_DamagePart_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesTag_DamagePart::PEEK_ADDED_DEFAULT", (int64)EMovesTag_DamagePart::PEEK_ADDED_DEFAULT },
				{ "EMovesTag_DamagePart::DP_Head", (int64)EMovesTag_DamagePart::DP_Head },
				{ "EMovesTag_DamagePart::DP_Body", (int64)EMovesTag_DamagePart::DP_Body },
				{ "EMovesTag_DamagePart::DP_Arms", (int64)EMovesTag_DamagePart::DP_Arms },
				{ "EMovesTag_DamagePart::DP_Legs", (int64)EMovesTag_DamagePart::DP_Legs },
				{ "EMovesTag_DamagePart::DP_MAX", (int64)EMovesTag_DamagePart::DP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DP_Arms.Name", "EMovesTag_DamagePart::DP_Arms" },
				{ "DP_Body.Name", "EMovesTag_DamagePart::DP_Body" },
				{ "DP_Head.Name", "EMovesTag_DamagePart::DP_Head" },
				{ "DP_Legs.Name", "EMovesTag_DamagePart::DP_Legs" },
				{ "DP_MAX.Hidden", "" },
				{ "DP_MAX.Name", "EMovesTag_DamagePart::DP_MAX" },
				{ "ModuleRelativePath", "Public/EMovesTag_DamagePart.h" },
				{ "PEEK_ADDED_DEFAULT.Name", "EMovesTag_DamagePart::PEEK_ADDED_DEFAULT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesTag_DamagePart",
				"EMovesTag_DamagePart",
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
