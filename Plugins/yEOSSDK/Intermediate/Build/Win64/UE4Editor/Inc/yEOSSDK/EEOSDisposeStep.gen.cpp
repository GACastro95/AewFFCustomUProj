// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSDisposeStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSDisposeStep() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSDisposeStep();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSDisposeStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSDisposeStep, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSDisposeStep"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSDisposeStep>()
	{
		return EEOSDisposeStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSDisposeStep(EEOSDisposeStep_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSDisposeStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSDisposeStep_Hash() { return 2267063947U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSDisposeStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSDisposeStep"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSDisposeStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSDisposeStep::None", (int64)EEOSDisposeStep::None },
				{ "EEOSDisposeStep::BeginRelease", (int64)EEOSDisposeStep::BeginRelease },
				{ "EEOSDisposeStep::WaitBeginRelease", (int64)EEOSDisposeStep::WaitBeginRelease },
				{ "EEOSDisposeStep::EndRelease", (int64)EEOSDisposeStep::EndRelease },
				{ "EEOSDisposeStep::WaitEndRelease", (int64)EEOSDisposeStep::WaitEndRelease },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeginRelease.Name", "EEOSDisposeStep::BeginRelease" },
				{ "BlueprintType", "true" },
				{ "EndRelease.Name", "EEOSDisposeStep::EndRelease" },
				{ "ModuleRelativePath", "Public/EEOSDisposeStep.h" },
				{ "None.Name", "EEOSDisposeStep::None" },
				{ "WaitBeginRelease.Name", "EEOSDisposeStep::WaitBeginRelease" },
				{ "WaitEndRelease.Name", "EEOSDisposeStep::WaitEndRelease" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSDisposeStep",
				"EEOSDisposeStep",
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
