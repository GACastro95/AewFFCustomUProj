// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EBehaviorTreeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBehaviorTreeType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EBehaviorTreeType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EBehaviorTreeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EBehaviorTreeType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EBehaviorTreeType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EBehaviorTreeType>()
	{
		return EBehaviorTreeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBehaviorTreeType(EBehaviorTreeType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EBehaviorTreeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EBehaviorTreeType_Hash() { return 188415577U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EBehaviorTreeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBehaviorTreeType"), 0, Get_Z_Construct_UEnum_ABP_200508_EBehaviorTreeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBehaviorTreeType::None", (int64)EBehaviorTreeType::None },
				{ "EBehaviorTreeType::Default", (int64)EBehaviorTreeType::Default },
				{ "EBehaviorTreeType::Stop", (int64)EBehaviorTreeType::Stop },
				{ "EBehaviorTreeType::AfterMatch", (int64)EBehaviorTreeType::AfterMatch },
				{ "EBehaviorTreeType::AutoFinisher", (int64)EBehaviorTreeType::AutoFinisher },
				{ "EBehaviorTreeType::StrikeGuard", (int64)EBehaviorTreeType::StrikeGuard },
				{ "EBehaviorTreeType::GrappleGuard", (int64)EBehaviorTreeType::GrappleGuard },
				{ "EBehaviorTreeType::Aggressive", (int64)EBehaviorTreeType::Aggressive },
				{ "EBehaviorTreeType::HandsInPocket", (int64)EBehaviorTreeType::HandsInPocket },
				{ "EBehaviorTreeType::PinCut", (int64)EBehaviorTreeType::PinCut },
				{ "EBehaviorTreeType::AutoSignature", (int64)EBehaviorTreeType::AutoSignature },
				{ "EBehaviorTreeType::AutoPinFlow", (int64)EBehaviorTreeType::AutoPinFlow },
				{ "EBehaviorTreeType::SubmissionCut", (int64)EBehaviorTreeType::SubmissionCut },
				{ "EBehaviorTreeType::MatchResult", (int64)EBehaviorTreeType::MatchResult },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AfterMatch.Name", "EBehaviorTreeType::AfterMatch" },
				{ "Aggressive.Name", "EBehaviorTreeType::Aggressive" },
				{ "AutoFinisher.Name", "EBehaviorTreeType::AutoFinisher" },
				{ "AutoPinFlow.Name", "EBehaviorTreeType::AutoPinFlow" },
				{ "AutoSignature.Name", "EBehaviorTreeType::AutoSignature" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EBehaviorTreeType::Default" },
				{ "GrappleGuard.Name", "EBehaviorTreeType::GrappleGuard" },
				{ "HandsInPocket.Name", "EBehaviorTreeType::HandsInPocket" },
				{ "MatchResult.Name", "EBehaviorTreeType::MatchResult" },
				{ "ModuleRelativePath", "Public/EBehaviorTreeType.h" },
				{ "None.Name", "EBehaviorTreeType::None" },
				{ "PinCut.Name", "EBehaviorTreeType::PinCut" },
				{ "Stop.Name", "EBehaviorTreeType::Stop" },
				{ "StrikeGuard.Name", "EBehaviorTreeType::StrikeGuard" },
				{ "SubmissionCut.Name", "EBehaviorTreeType::SubmissionCut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EBehaviorTreeType",
				"EBehaviorTreeType",
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
