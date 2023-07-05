// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GamePlaySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePlaySubsystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGamePlaySubsystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGamePlaySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnGameTokenChanged__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnSavePlayerDataEnded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGamePlaySubsystem::execOnSavedOnlineInfo)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSavedOnlineInfo(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGamePlaySubsystem::execOnSavedPlayerData)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSavedPlayerData(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	void UGamePlaySubsystem::StaticRegisterNativesUGamePlaySubsystem()
	{
		UClass* Class = UGamePlaySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSavedOnlineInfo", &UGamePlaySubsystem::execOnSavedOnlineInfo },
			{ "OnSavedPlayerData", &UGamePlaySubsystem::execOnSavedPlayerData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics
	{
		struct GamePlaySubsystem_eventOnSavedOnlineInfo_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamePlaySubsystem_eventOnSavedOnlineInfo_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamePlaySubsystem_eventOnSavedOnlineInfo_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamePlaySubsystem_eventOnSavedOnlineInfo_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlaySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamePlaySubsystem, nullptr, "OnSavedOnlineInfo", nullptr, nullptr, sizeof(GamePlaySubsystem_eventOnSavedOnlineInfo_Parms), Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics
	{
		struct GamePlaySubsystem_eventOnSavedPlayerData_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamePlaySubsystem_eventOnSavedPlayerData_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamePlaySubsystem_eventOnSavedPlayerData_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamePlaySubsystem_eventOnSavedPlayerData_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GamePlaySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamePlaySubsystem, nullptr, "OnSavedPlayerData", nullptr, nullptr, sizeof(GamePlaySubsystem_eventOnSavedPlayerData_Parms), Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGamePlaySubsystem_NoRegister()
	{
		return UGamePlaySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGamePlaySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAewCashValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAewCashValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAewGoldValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAewGoldValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSavePlayerDataEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSavePlayerDataEnded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGamePlaySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGamePlaySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGamePlaySubsystem_OnSavedOnlineInfo, "OnSavedOnlineInfo" }, // 946275557
		{ &Z_Construct_UFunction_UGamePlaySubsystem_OnSavedPlayerData, "OnSavedPlayerData" }, // 2198857175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePlaySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GamePlaySubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GamePlaySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewCashValueChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamePlaySubsystem" },
		{ "ModuleRelativePath", "Public/GamePlaySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewCashValueChanged = { "OnAewCashValueChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGamePlaySubsystem, OnAewCashValueChanged), Z_Construct_UDelegateFunction_ABP_200508_OnGameTokenChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewCashValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewCashValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewGoldValueChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamePlaySubsystem" },
		{ "ModuleRelativePath", "Public/GamePlaySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewGoldValueChanged = { "OnAewGoldValueChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGamePlaySubsystem, OnAewGoldValueChanged), Z_Construct_UDelegateFunction_ABP_200508_OnGameTokenChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewGoldValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewGoldValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnSavePlayerDataEnded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamePlaySubsystem" },
		{ "ModuleRelativePath", "Public/GamePlaySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnSavePlayerDataEnded = { "OnSavePlayerDataEnded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGamePlaySubsystem, OnSavePlayerDataEnded), Z_Construct_UDelegateFunction_ABP_200508_OnSavePlayerDataEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnSavePlayerDataEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnSavePlayerDataEnded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGamePlaySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewCashValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnAewGoldValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamePlaySubsystem_Statics::NewProp_OnSavePlayerDataEnded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGamePlaySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamePlaySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGamePlaySubsystem_Statics::ClassParams = {
		&UGamePlaySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGamePlaySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlaySubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGamePlaySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlaySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGamePlaySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGamePlaySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamePlaySubsystem, 2072256205);
	template<> ABP_200508_API UClass* StaticClass<UGamePlaySubsystem>()
	{
		return UGamePlaySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamePlaySubsystem(Z_Construct_UClass_UGamePlaySubsystem, &UGamePlaySubsystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGamePlaySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamePlaySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
