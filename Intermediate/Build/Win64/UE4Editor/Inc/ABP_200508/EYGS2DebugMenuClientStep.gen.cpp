// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EYGS2DebugMenuClientStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2DebugMenuClientStep() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuClientStep();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EYGS2DebugMenuClientStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuClientStep, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EYGS2DebugMenuClientStep"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EYGS2DebugMenuClientStep>()
	{
		return EYGS2DebugMenuClientStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2DebugMenuClientStep(EYGS2DebugMenuClientStep_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EYGS2DebugMenuClientStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuClientStep_Hash() { return 2362392115U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuClientStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2DebugMenuClientStep"), 0, Get_Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuClientStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2DebugMenuClientStep::None", (int64)EYGS2DebugMenuClientStep::None },
				{ "EYGS2DebugMenuClientStep::BeginWait", (int64)EYGS2DebugMenuClientStep::BeginWait },
				{ "EYGS2DebugMenuClientStep::Requested", (int64)EYGS2DebugMenuClientStep::Requested },
				{ "EYGS2DebugMenuClientStep::Respond", (int64)EYGS2DebugMenuClientStep::Respond },
				{ "EYGS2DebugMenuClientStep::Error", (int64)EYGS2DebugMenuClientStep::Error },
				{ "EYGS2DebugMenuClientStep::Max", (int64)EYGS2DebugMenuClientStep::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeginWait.Name", "EYGS2DebugMenuClientStep::BeginWait" },
				{ "BlueprintType", "true" },
				{ "Error.Name", "EYGS2DebugMenuClientStep::Error" },
				{ "Max.Name", "EYGS2DebugMenuClientStep::Max" },
				{ "ModuleRelativePath", "Public/EYGS2DebugMenuClientStep.h" },
				{ "None.Name", "EYGS2DebugMenuClientStep::None" },
				{ "Requested.Name", "EYGS2DebugMenuClientStep::Requested" },
				{ "Respond.Name", "EYGS2DebugMenuClientStep::Respond" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EYGS2DebugMenuClientStep",
				"EYGS2DebugMenuClientStep",
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
