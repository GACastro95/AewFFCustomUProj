// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELSoundInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSoundInfo() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSoundInfo_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSoundInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FyStSoundAssetDataTable();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FyStSoundPlayInfo();
// End Cross Module References
	DEFINE_FUNCTION(UELSoundInfo::execGetSoundAssetDataTables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FyStSoundAssetDataTable*)Z_Param__Result=P_THIS->GetSoundAssetDataTables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundInfo::execGetSoundPlayInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FyStSoundPlayInfo*)Z_Param__Result=P_THIS->GetSoundPlayInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundInfo::execIsStackPlaySound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStackPlaySound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundInfo::execSetSoundAssetDataTables)
	{
		P_GET_STRUCT(FyStSoundAssetDataTable,Z_Param__stData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundAssetDataTables(Z_Param__stData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundInfo::execSetSoundPlayInfo)
	{
		P_GET_STRUCT(FyStSoundPlayInfo,Z_Param__soundInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundPlayInfo(Z_Param__soundInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSoundInfo::execSetStackPlaySound)
	{
		P_GET_UBOOL(Z_Param__stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStackPlaySound(Z_Param__stack);
		P_NATIVE_END;
	}
	void UELSoundInfo::StaticRegisterNativesUELSoundInfo()
	{
		UClass* Class = UELSoundInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSoundAssetDataTables", &UELSoundInfo::execGetSoundAssetDataTables },
			{ "GetSoundPlayInfo", &UELSoundInfo::execGetSoundPlayInfo },
			{ "IsStackPlaySound", &UELSoundInfo::execIsStackPlaySound },
			{ "SetSoundAssetDataTables", &UELSoundInfo::execSetSoundAssetDataTables },
			{ "SetSoundPlayInfo", &UELSoundInfo::execSetSoundPlayInfo },
			{ "SetStackPlaySound", &UELSoundInfo::execSetStackPlaySound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics
	{
		struct ELSoundInfo_eventGetSoundAssetDataTables_Parms
		{
			FyStSoundAssetDataTable ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundInfo_eventGetSoundAssetDataTables_Parms, ReturnValue), Z_Construct_UScriptStruct_FyStSoundAssetDataTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundInfo, nullptr, "GetSoundAssetDataTables", nullptr, nullptr, sizeof(ELSoundInfo_eventGetSoundAssetDataTables_Parms), Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics
	{
		struct ELSoundInfo_eventGetSoundPlayInfo_Parms
		{
			FyStSoundPlayInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundInfo_eventGetSoundPlayInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FyStSoundPlayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundInfo, nullptr, "GetSoundPlayInfo", nullptr, nullptr, sizeof(ELSoundInfo_eventGetSoundPlayInfo_Parms), Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics
	{
		struct ELSoundInfo_eventIsStackPlaySound_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSoundInfo_eventIsStackPlaySound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundInfo_eventIsStackPlaySound_Parms), &Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundInfo, nullptr, "IsStackPlaySound", nullptr, nullptr, sizeof(ELSoundInfo_eventIsStackPlaySound_Parms), Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics
	{
		struct ELSoundInfo_eventSetSoundAssetDataTables_Parms
		{
			FyStSoundAssetDataTable _stData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::NewProp__stData = { "_stData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundInfo_eventSetSoundAssetDataTables_Parms, _stData), Z_Construct_UScriptStruct_FyStSoundAssetDataTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::NewProp__stData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundInfo, nullptr, "SetSoundAssetDataTables", nullptr, nullptr, sizeof(ELSoundInfo_eventSetSoundAssetDataTables_Parms), Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics
	{
		struct ELSoundInfo_eventSetSoundPlayInfo_Parms
		{
			FyStSoundPlayInfo _soundInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__soundInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::NewProp__soundInfo = { "_soundInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSoundInfo_eventSetSoundPlayInfo_Parms, _soundInfo), Z_Construct_UScriptStruct_FyStSoundPlayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::NewProp__soundInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundInfo, nullptr, "SetSoundPlayInfo", nullptr, nullptr, sizeof(ELSoundInfo_eventSetSoundPlayInfo_Parms), Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics
	{
		struct ELSoundInfo_eventSetStackPlaySound_Parms
		{
			bool _stack;
		};
		static void NewProp__stack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__stack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::NewProp__stack_SetBit(void* Obj)
	{
		((ELSoundInfo_eventSetStackPlaySound_Parms*)Obj)->_stack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::NewProp__stack = { "_stack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSoundInfo_eventSetStackPlaySound_Parms), &Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::NewProp__stack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::NewProp__stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSoundInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSoundInfo, nullptr, "SetStackPlaySound", nullptr, nullptr, sizeof(ELSoundInfo_eventSetStackPlaySound_Parms), Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSoundInfo_NoRegister()
	{
		return UELSoundInfo::StaticClass();
	}
	struct Z_Construct_UClass_UELSoundInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSoundInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSoundInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSoundInfo_GetSoundAssetDataTables, "GetSoundAssetDataTables" }, // 698247928
		{ &Z_Construct_UFunction_UELSoundInfo_GetSoundPlayInfo, "GetSoundPlayInfo" }, // 3785157319
		{ &Z_Construct_UFunction_UELSoundInfo_IsStackPlaySound, "IsStackPlaySound" }, // 2152174552
		{ &Z_Construct_UFunction_UELSoundInfo_SetSoundAssetDataTables, "SetSoundAssetDataTables" }, // 4039588761
		{ &Z_Construct_UFunction_UELSoundInfo_SetSoundPlayInfo, "SetSoundPlayInfo" }, // 2234965999
		{ &Z_Construct_UFunction_UELSoundInfo_SetStackPlaySound, "SetStackPlaySound" }, // 1346921403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSoundInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSoundInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSoundInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSoundInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSoundInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSoundInfo_Statics::ClassParams = {
		&UELSoundInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSoundInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSoundInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSoundInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSoundInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSoundInfo, 1635589564);
	template<> ELITE_GAME_API UClass* StaticClass<UELSoundInfo>()
	{
		return UELSoundInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSoundInfo(Z_Construct_UClass_UELSoundInfo, &UELSoundInfo::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELSoundInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSoundInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
