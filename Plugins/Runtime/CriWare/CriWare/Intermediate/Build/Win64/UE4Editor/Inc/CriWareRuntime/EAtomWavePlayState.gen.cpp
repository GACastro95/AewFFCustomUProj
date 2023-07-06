// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomWavePlayState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomWavePlayState() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomWavePlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomWavePlayState"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomWavePlayState>()
	{
		return EAtomWavePlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomWavePlayState(EAtomWavePlayState_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomWavePlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Hash() { return 2005683254U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomWavePlayState"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomWavePlayState::Playing", (int64)EAtomWavePlayState::Playing },
				{ "EAtomWavePlayState::Stopped", (int64)EAtomWavePlayState::Stopped },
				{ "EAtomWavePlayState::Paused", (int64)EAtomWavePlayState::Paused },
				{ "EAtomWavePlayState::FadingIn", (int64)EAtomWavePlayState::FadingIn },
				{ "EAtomWavePlayState::FadingOut", (int64)EAtomWavePlayState::FadingOut },
				{ "EAtomWavePlayState::Count", (int64)EAtomWavePlayState::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Name", "EAtomWavePlayState::Count" },
				{ "FadingIn.Name", "EAtomWavePlayState::FadingIn" },
				{ "FadingOut.Name", "EAtomWavePlayState::FadingOut" },
				{ "ModuleRelativePath", "Public/EAtomWavePlayState.h" },
				{ "Paused.Name", "EAtomWavePlayState::Paused" },
				{ "Playing.Name", "EAtomWavePlayState::Playing" },
				{ "Stopped.Name", "EAtomWavePlayState::Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomWavePlayState",
				"EAtomWavePlayState",
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