// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlaybackTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlaybackTimer() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EManaPlaybackTimer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlaybackTimer"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlaybackTimer>()
	{
		return EManaPlaybackTimer_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaPlaybackTimer(EManaPlaybackTimer_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaPlaybackTimer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Hash() { return 185099409U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaPlaybackTimer"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManaPlaybackTimer::Default", (int64)EManaPlaybackTimer::Default },
				{ "EManaPlaybackTimer::RealTime", (int64)EManaPlaybackTimer::RealTime },
				{ "EManaPlaybackTimer::FrameTime", (int64)EManaPlaybackTimer::FrameTime },
				{ "EManaPlaybackTimer::Manual", (int64)EManaPlaybackTimer::Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EManaPlaybackTimer::Default" },
				{ "FrameTime.Name", "EManaPlaybackTimer::FrameTime" },
				{ "Manual.Name", "EManaPlaybackTimer::Manual" },
				{ "ModuleRelativePath", "Public/EManaPlaybackTimer.h" },
				{ "RealTime.Name", "EManaPlaybackTimer::RealTime" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EManaPlaybackTimer",
				"EManaPlaybackTimer",
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
