// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerGoOutMenuActType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerGoOutMenuActType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerGoOutMenuActType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerGoOutMenuActType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerGoOutMenuActType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerGoOutMenuActType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerGoOutMenuActType>()
	{
		return ECareerGoOutMenuActType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerGoOutMenuActType(ECareerGoOutMenuActType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerGoOutMenuActType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerGoOutMenuActType_Hash() { return 2476381904U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerGoOutMenuActType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerGoOutMenuActType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerGoOutMenuActType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerGoOutMenuActType::Sightseeing", (int64)ECareerGoOutMenuActType::Sightseeing },
				{ "ECareerGoOutMenuActType::Casino", (int64)ECareerGoOutMenuActType::Casino },
				{ "ECareerGoOutMenuActType::MiniGame", (int64)ECareerGoOutMenuActType::MiniGame },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Casino.Name", "ECareerGoOutMenuActType::Casino" },
				{ "MiniGame.Name", "ECareerGoOutMenuActType::MiniGame" },
				{ "ModuleRelativePath", "Public/ECareerGoOutMenuActType.h" },
				{ "Sightseeing.Name", "ECareerGoOutMenuActType::Sightseeing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerGoOutMenuActType",
				"ECareerGoOutMenuActType",
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
