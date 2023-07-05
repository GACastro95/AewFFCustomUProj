// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELWrestlerSelectAssetLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerSelectAssetLoader() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELWrestlerSelectAssetLoader_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELWrestlerSelectAssetLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_WrestlerSelectAssetLoadCompleteDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_WrestlerSelectOnlineAssetLoadCompleteDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELWrestlerSelectAssetLoader::execIsLoadedOnlineAsset)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out__wrestlerSetupParam);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__PresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadedOnlineAsset(Z_Param_Out__wrestlerSetupParam,Z_Param_Out__PresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELWrestlerSelectAssetLoader::execLoadAsyncAssets)
	{
		P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out__assetPathList);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__positionIndex);
		P_GET_ENUM_REF(EWrestlerID_N,Z_Param_Out__WrestlerID);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out__wrestlerUID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__PresetIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsyncAssets(Z_Param_Out__assetPathList,Z_Param_Out__positionIndex,(EWrestlerID_N&)(Z_Param_Out__WrestlerID),Z_Param_Out__wrestlerUID,Z_Param_Out__PresetIndex,FWrestlerSelectAssetLoadCompleteDelegate(Z_Param__delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELWrestlerSelectAssetLoader::execLoadAsyncOnlineAssets)
	{
		P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out__assetPathList);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__positionIndex);
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out__wrestlerSetupParam);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__PresetIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsyncOnlineAssets(Z_Param_Out__assetPathList,Z_Param_Out__positionIndex,Z_Param_Out__wrestlerSetupParam,Z_Param_Out__PresetIndex,FWrestlerSelectOnlineAssetLoadCompleteDelegate(Z_Param__delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELWrestlerSelectAssetLoader::execReleaseAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseAssets();
		P_NATIVE_END;
	}
	void UELWrestlerSelectAssetLoader::StaticRegisterNativesUELWrestlerSelectAssetLoader()
	{
		UClass* Class = UELWrestlerSelectAssetLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoadedOnlineAsset", &UELWrestlerSelectAssetLoader::execIsLoadedOnlineAsset },
			{ "LoadAsyncAssets", &UELWrestlerSelectAssetLoader::execLoadAsyncAssets },
			{ "LoadAsyncOnlineAssets", &UELWrestlerSelectAssetLoader::execLoadAsyncOnlineAssets },
			{ "ReleaseAssets", &UELWrestlerSelectAssetLoader::execReleaseAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics
	{
		struct ELWrestlerSelectAssetLoader_eventIsLoadedOnlineAsset_Parms
		{
			FWrestlerSetupParam _wrestlerSetupParam;
			int32 _PresetIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wrestlerSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PresetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__PresetIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__wrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__wrestlerSetupParam = { "_wrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventIsLoadedOnlineAsset_Parms, _wrestlerSetupParam), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__wrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__wrestlerSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__PresetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__PresetIndex = { "_PresetIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventIsLoadedOnlineAsset_Parms, _PresetIndex), METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__PresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__PresetIndex_MetaData)) };
	void Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELWrestlerSelectAssetLoader_eventIsLoadedOnlineAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELWrestlerSelectAssetLoader_eventIsLoadedOnlineAsset_Parms), &Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__wrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp__PresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELWrestlerSelectAssetLoader, nullptr, "IsLoadedOnlineAsset", nullptr, nullptr, sizeof(ELWrestlerSelectAssetLoader_eventIsLoadedOnlineAsset_Parms), Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics
	{
		struct ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms
		{
			TArray<FSoftObjectPath> _assetPathList;
			int32 _positionIndex;
			EWrestlerID_N _WrestlerID;
			FGuid _wrestlerUID;
			int32 _PresetIndex;
			FScriptDelegate _delegate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__assetPathList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__assetPathList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__assetPathList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__positionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__positionIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wrestlerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wrestlerUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PresetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__PresetIndex;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__delegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__assetPathList_Inner = { "_assetPathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__assetPathList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__assetPathList = { "_assetPathList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms, _assetPathList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__assetPathList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__assetPathList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__positionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__positionIndex = { "_positionIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms, _positionIndex), METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__positionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__positionIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__wrestlerUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__wrestlerUID = { "_wrestlerUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms, _wrestlerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__wrestlerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__wrestlerUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__PresetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__PresetIndex = { "_PresetIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms, _PresetIndex), METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__PresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__PresetIndex_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__delegate = { "_delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms, _delegate), Z_Construct_UDelegateFunction_ABP_200508_WrestlerSelectAssetLoadCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__assetPathList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__assetPathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__positionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__wrestlerUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__PresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::NewProp__delegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELWrestlerSelectAssetLoader, nullptr, "LoadAsyncAssets", nullptr, nullptr, sizeof(ELWrestlerSelectAssetLoader_eventLoadAsyncAssets_Parms), Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics
	{
		struct ELWrestlerSelectAssetLoader_eventLoadAsyncOnlineAssets_Parms
		{
			TArray<FSoftObjectPath> _assetPathList;
			int32 _positionIndex;
			FWrestlerSetupParam _wrestlerSetupParam;
			int32 _PresetIndex;
			FScriptDelegate _delegate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__assetPathList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__assetPathList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__assetPathList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__positionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__positionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wrestlerSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PresetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__PresetIndex;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__delegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__assetPathList_Inner = { "_assetPathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__assetPathList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__assetPathList = { "_assetPathList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncOnlineAssets_Parms, _assetPathList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__assetPathList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__assetPathList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__positionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__positionIndex = { "_positionIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncOnlineAssets_Parms, _positionIndex), METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__positionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__positionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__wrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__wrestlerSetupParam = { "_wrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncOnlineAssets_Parms, _wrestlerSetupParam), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__wrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__wrestlerSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__PresetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__PresetIndex = { "_PresetIndex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncOnlineAssets_Parms, _PresetIndex), METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__PresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__PresetIndex_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__delegate = { "_delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELWrestlerSelectAssetLoader_eventLoadAsyncOnlineAssets_Parms, _delegate), Z_Construct_UDelegateFunction_ABP_200508_WrestlerSelectOnlineAssetLoadCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__assetPathList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__assetPathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__positionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__wrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__PresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::NewProp__delegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELWrestlerSelectAssetLoader, nullptr, "LoadAsyncOnlineAssets", nullptr, nullptr, sizeof(ELWrestlerSelectAssetLoader_eventLoadAsyncOnlineAssets_Parms), Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELWrestlerSelectAssetLoader, nullptr, "ReleaseAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELWrestlerSelectAssetLoader_NoRegister()
	{
		return UELWrestlerSelectAssetLoader::StaticClass();
	}
	struct Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PositionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_PositionIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WrestlerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_WrestlerUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PresetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_PresetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_WrestlerSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_LoadCompleteDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadOnlineCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_LoadOnlineCompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELWrestlerSelectAssetLoader_IsLoadedOnlineAsset, "IsLoadedOnlineAsset" }, // 3942205443
		{ &Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncAssets, "LoadAsyncAssets" }, // 4232717514
		{ &Z_Construct_UFunction_UELWrestlerSelectAssetLoader_LoadAsyncOnlineAssets, "LoadAsyncOnlineAssets" }, // 1833213009
		{ &Z_Construct_UFunction_UELWrestlerSelectAssetLoader_ReleaseAssets, "ReleaseAssets" }, // 4017786663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELWrestlerSelectAssetLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PositionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectAssetLoader" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PositionIndex = { "m_PositionIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_PositionIndex), METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PositionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PositionIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectAssetLoader" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerID = { "m_WrestlerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectAssetLoader" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerUID = { "m_WrestlerUID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_WrestlerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PresetIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectAssetLoader" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PresetIndex = { "m_PresetIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_PresetIndex), METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PresetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerSetupParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectAssetLoader" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerSetupParam = { "m_WrestlerSetupParam", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_WrestlerSetupParam), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadCompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectAssetLoader" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadCompleteDelegate = { "LoadCompleteDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSelectAssetLoader, LoadCompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_WrestlerSelectAssetLoadCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadCompleteDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadOnlineCompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectAssetLoader" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectAssetLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadOnlineCompleteDelegate = { "LoadOnlineCompleteDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSelectAssetLoader, LoadOnlineCompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_WrestlerSelectOnlineAssetLoadCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadOnlineCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadOnlineCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PositionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_PresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_m_WrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadCompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::NewProp_LoadOnlineCompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELWrestlerSelectAssetLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::ClassParams = {
		&UELWrestlerSelectAssetLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELWrestlerSelectAssetLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELWrestlerSelectAssetLoader, 1880103270);
	template<> ABP_200508_API UClass* StaticClass<UELWrestlerSelectAssetLoader>()
	{
		return UELWrestlerSelectAssetLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELWrestlerSelectAssetLoader(Z_Construct_UClass_UELWrestlerSelectAssetLoader, &UELWrestlerSelectAssetLoader::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELWrestlerSelectAssetLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELWrestlerSelectAssetLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
