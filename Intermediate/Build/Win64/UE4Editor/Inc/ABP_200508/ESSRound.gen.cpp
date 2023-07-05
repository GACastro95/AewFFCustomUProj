// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSRound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSRound() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRound();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSRound_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSRound, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSRound"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSRound>()
	{
		return ESSRound_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSRound(ESSRound_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSRound"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSRound_Hash() { return 2381094380U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSRound()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSRound"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSRound_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSRound::Round0", (int64)ESSRound::Round0 },
				{ "ESSRound::Round1", (int64)ESSRound::Round1 },
				{ "ESSRound::Round2", (int64)ESSRound::Round2 },
				{ "ESSRound::Round3", (int64)ESSRound::Round3 },
				{ "ESSRound::Round4", (int64)ESSRound::Round4 },
				{ "ESSRound::Round5", (int64)ESSRound::Round5 },
				{ "ESSRound::Round6", (int64)ESSRound::Round6 },
				{ "ESSRound::Round7", (int64)ESSRound::Round7 },
				{ "ESSRound::Round8", (int64)ESSRound::Round8 },
				{ "ESSRound::Round9", (int64)ESSRound::Round9 },
				{ "ESSRound::Round10", (int64)ESSRound::Round10 },
				{ "ESSRound::Round11", (int64)ESSRound::Round11 },
				{ "ESSRound::Round12", (int64)ESSRound::Round12 },
				{ "ESSRound::Round13", (int64)ESSRound::Round13 },
				{ "ESSRound::Round14", (int64)ESSRound::Round14 },
				{ "ESSRound::Round15", (int64)ESSRound::Round15 },
				{ "ESSRound::RoundFinal", (int64)ESSRound::RoundFinal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSRound.h" },
				{ "Round0.Name", "ESSRound::Round0" },
				{ "Round1.Name", "ESSRound::Round1" },
				{ "Round10.Name", "ESSRound::Round10" },
				{ "Round11.Name", "ESSRound::Round11" },
				{ "Round12.Name", "ESSRound::Round12" },
				{ "Round13.Name", "ESSRound::Round13" },
				{ "Round14.Name", "ESSRound::Round14" },
				{ "Round15.Name", "ESSRound::Round15" },
				{ "Round2.Name", "ESSRound::Round2" },
				{ "Round3.Name", "ESSRound::Round3" },
				{ "Round4.Name", "ESSRound::Round4" },
				{ "Round5.Name", "ESSRound::Round5" },
				{ "Round6.Name", "ESSRound::Round6" },
				{ "Round7.Name", "ESSRound::Round7" },
				{ "Round8.Name", "ESSRound::Round8" },
				{ "Round9.Name", "ESSRound::Round9" },
				{ "RoundFinal.Name", "ESSRound::RoundFinal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSRound",
				"ESSRound",
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
