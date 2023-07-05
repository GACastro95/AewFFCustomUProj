// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMoviePlayerStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMoviePlayerStatus() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMoviePlayerStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMoviePlayerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMoviePlayerStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMoviePlayerStatus"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMoviePlayerStatus>()
	{
		return EMoviePlayerStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoviePlayerStatus(EMoviePlayerStatus_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMoviePlayerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMoviePlayerStatus_Hash() { return 3540186151U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMoviePlayerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoviePlayerStatus"), 0, Get_Z_Construct_UEnum_ABP_200508_EMoviePlayerStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoviePlayerStatus::Stop", (int64)EMoviePlayerStatus::Stop },
				{ "EMoviePlayerStatus::DecHdr", (int64)EMoviePlayerStatus::DecHdr },
				{ "EMoviePlayerStatus::WaitPrep", (int64)EMoviePlayerStatus::WaitPrep },
				{ "EMoviePlayerStatus::Prep", (int64)EMoviePlayerStatus::Prep },
				{ "EMoviePlayerStatus::Ready", (int64)EMoviePlayerStatus::Ready },
				{ "EMoviePlayerStatus::Playing", (int64)EMoviePlayerStatus::Playing },
				{ "EMoviePlayerStatus::PlayEnd", (int64)EMoviePlayerStatus::PlayEnd },
				{ "EMoviePlayerStatus::Error", (int64)EMoviePlayerStatus::Error },
				{ "EMoviePlayerStatus::StopProcessing", (int64)EMoviePlayerStatus::StopProcessing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DecHdr.Name", "EMoviePlayerStatus::DecHdr" },
				{ "Error.Name", "EMoviePlayerStatus::Error" },
				{ "ModuleRelativePath", "Public/EMoviePlayerStatus.h" },
				{ "PlayEnd.Name", "EMoviePlayerStatus::PlayEnd" },
				{ "Playing.Name", "EMoviePlayerStatus::Playing" },
				{ "Prep.Name", "EMoviePlayerStatus::Prep" },
				{ "Ready.Name", "EMoviePlayerStatus::Ready" },
				{ "Stop.Name", "EMoviePlayerStatus::Stop" },
				{ "StopProcessing.Name", "EMoviePlayerStatus::StopProcessing" },
				{ "WaitPrep.Name", "EMoviePlayerStatus::WaitPrep" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMoviePlayerStatus",
				"EMoviePlayerStatus",
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
