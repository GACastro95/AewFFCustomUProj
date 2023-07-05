// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EOutCome.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOutCome() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EOutCome();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EOutCome_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EOutCome, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EOutCome"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EOutCome>()
	{
		return EOutCome_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOutCome(EOutCome_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EOutCome"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EOutCome_Hash() { return 3615589144U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EOutCome()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOutCome"), 0, Get_Z_Construct_UEnum_ABP_200508_EOutCome_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOutCome::Completed", (int64)EOutCome::Completed },
				{ "EOutCome::Failed", (int64)EOutCome::Failed },
				{ "EOutCome::Abandoned", (int64)EOutCome::Abandoned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abandoned.Name", "EOutCome::Abandoned" },
				{ "BlueprintType", "true" },
				{ "Completed.Name", "EOutCome::Completed" },
				{ "Failed.Name", "EOutCome::Failed" },
				{ "ModuleRelativePath", "Public/EOutCome.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EOutCome",
				"EOutCome",
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
