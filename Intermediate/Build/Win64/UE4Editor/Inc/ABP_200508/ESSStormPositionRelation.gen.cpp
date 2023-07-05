// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSStormPositionRelation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSStormPositionRelation() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStormPositionRelation();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSStormPositionRelation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSStormPositionRelation, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSStormPositionRelation"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSStormPositionRelation>()
	{
		return ESSStormPositionRelation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSStormPositionRelation(ESSStormPositionRelation_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSStormPositionRelation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSStormPositionRelation_Hash() { return 3968542739U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSStormPositionRelation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSStormPositionRelation"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSStormPositionRelation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSStormPositionRelation::Safe", (int64)ESSStormPositionRelation::Safe },
				{ "ESSStormPositionRelation::OutOfAnnounce", (int64)ESSStormPositionRelation::OutOfAnnounce },
				{ "ESSStormPositionRelation::OutOfZone", (int64)ESSStormPositionRelation::OutOfZone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSStormPositionRelation.h" },
				{ "OutOfAnnounce.Name", "ESSStormPositionRelation::OutOfAnnounce" },
				{ "OutOfZone.Name", "ESSStormPositionRelation::OutOfZone" },
				{ "Safe.Name", "ESSStormPositionRelation::Safe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSStormPositionRelation",
				"ESSStormPositionRelation",
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
