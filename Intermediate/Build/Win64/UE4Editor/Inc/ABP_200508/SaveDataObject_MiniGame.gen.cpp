// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_MiniGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_MiniGame() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_MiniGame_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_MiniGame();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_MiniGame::execGetMiniGamePlayedStatusArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out_AlreadyPlayedArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMiniGamePlayedStatusArray(Z_Param_Out_AlreadyPlayedArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_MiniGame::execSetMiniGamePlayedStatus)
	{
		P_GET_ENUM(EMiniGameID,Z_Param__MiniGameID);
		P_GET_UBOOL(Z_Param__IsPlayed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiniGamePlayedStatus(EMiniGameID(Z_Param__MiniGameID),Z_Param__IsPlayed);
		P_NATIVE_END;
	}
	void USaveDataObject_MiniGame::StaticRegisterNativesUSaveDataObject_MiniGame()
	{
		UClass* Class = USaveDataObject_MiniGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMiniGamePlayedStatusArray", &USaveDataObject_MiniGame::execGetMiniGamePlayedStatusArray },
			{ "SetMiniGamePlayedStatus", &USaveDataObject_MiniGame::execSetMiniGamePlayedStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics
	{
		struct SaveDataObject_MiniGame_eventGetMiniGamePlayedStatusArray_Parms
		{
			TArray<bool> AlreadyPlayedArray;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlreadyPlayedArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlreadyPlayedArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::NewProp_AlreadyPlayedArray_Inner = { "AlreadyPlayedArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::NewProp_AlreadyPlayedArray = { "AlreadyPlayedArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_MiniGame_eventGetMiniGamePlayedStatusArray_Parms, AlreadyPlayedArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::NewProp_AlreadyPlayedArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::NewProp_AlreadyPlayedArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_MiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_MiniGame, nullptr, "GetMiniGamePlayedStatusArray", nullptr, nullptr, sizeof(SaveDataObject_MiniGame_eventGetMiniGamePlayedStatusArray_Parms), Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics
	{
		struct SaveDataObject_MiniGame_eventSetMiniGamePlayedStatus_Parms
		{
			EMiniGameID _MiniGameID;
			bool _IsPlayed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__MiniGameID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__MiniGameID;
		static void NewProp__IsPlayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__IsPlayed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__MiniGameID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__MiniGameID = { "_MiniGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_MiniGame_eventSetMiniGamePlayedStatus_Parms, _MiniGameID), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__IsPlayed_SetBit(void* Obj)
	{
		((SaveDataObject_MiniGame_eventSetMiniGamePlayedStatus_Parms*)Obj)->_IsPlayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__IsPlayed = { "_IsPlayed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_MiniGame_eventSetMiniGamePlayedStatus_Parms), &Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__IsPlayed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__MiniGameID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__MiniGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::NewProp__IsPlayed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_MiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_MiniGame, nullptr, "SetMiniGamePlayedStatus", nullptr, nullptr, sizeof(SaveDataObject_MiniGame_eventSetMiniGamePlayedStatus_Parms), Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_MiniGame_NoRegister()
	{
		return USaveDataObject_MiniGame::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_MiniGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_MiniGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_MiniGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_MiniGame_GetMiniGamePlayedStatusArray, "GetMiniGamePlayedStatusArray" }, // 449438457
		{ &Z_Construct_UFunction_USaveDataObject_MiniGame_SetMiniGamePlayedStatus, "SetMiniGamePlayedStatus" }, // 4211210087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_MiniGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_MiniGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_MiniGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_MiniGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_MiniGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_MiniGame_Statics::ClassParams = {
		&USaveDataObject_MiniGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_MiniGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_MiniGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_MiniGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_MiniGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_MiniGame, 4096225186);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_MiniGame>()
	{
		return USaveDataObject_MiniGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_MiniGame(Z_Construct_UClass_USaveDataObject_MiniGame, &USaveDataObject_MiniGame::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_MiniGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_MiniGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
