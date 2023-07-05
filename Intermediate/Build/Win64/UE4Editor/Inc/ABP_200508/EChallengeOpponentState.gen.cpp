// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EChallengeOpponentState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeOpponentState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeOpponentState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EChallengeOpponentState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EChallengeOpponentState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EChallengeOpponentState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EChallengeOpponentState>()
	{
		return EChallengeOpponentState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeOpponentState(EChallengeOpponentState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EChallengeOpponentState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EChallengeOpponentState_Hash() { return 1498817590U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EChallengeOpponentState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeOpponentState"), 0, Get_Z_Construct_UEnum_ABP_200508_EChallengeOpponentState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeOpponentState::None", (int64)EChallengeOpponentState::None },
				{ "EChallengeOpponentState::CPU", (int64)EChallengeOpponentState::CPU },
				{ "EChallengeOpponentState::LocalUser", (int64)EChallengeOpponentState::LocalUser },
				{ "EChallengeOpponentState::OnlineUser", (int64)EChallengeOpponentState::OnlineUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CPU.Name", "EChallengeOpponentState::CPU" },
				{ "LocalUser.Name", "EChallengeOpponentState::LocalUser" },
				{ "ModuleRelativePath", "Public/EChallengeOpponentState.h" },
				{ "None.Name", "EChallengeOpponentState::None" },
				{ "OnlineUser.Name", "EChallengeOpponentState::OnlineUser" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EChallengeOpponentState",
				"EChallengeOpponentState",
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
