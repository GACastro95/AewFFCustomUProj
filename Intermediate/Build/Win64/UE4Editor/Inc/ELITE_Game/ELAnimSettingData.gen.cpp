// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELAnimSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimSettingData() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimSettingData_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimSettingData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimSettingData::execAddAnimSettingData)
	{
		P_GET_OBJECT_REF(UELAnimSettingData,Z_Param_Out_AnimSettingData);
		P_GET_OBJECT(UAnimationAsset,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAnimSettingData::AddAnimSettingData(Z_Param_Out_AnimSettingData,Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimSettingData::execTryGetAnimSettingData)
	{
		P_GET_OBJECT_REF(UELAnimSettingData,Z_Param_Out_AnimSettingData);
		P_GET_OBJECT(UAnimationAsset,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAnimSettingData::TryGetAnimSettingData(Z_Param_Out_AnimSettingData,Z_Param_Animation);
		P_NATIVE_END;
	}
	void UELAnimSettingData::StaticRegisterNativesUELAnimSettingData()
	{
		UClass* Class = UELAnimSettingData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnimSettingData", &UELAnimSettingData::execAddAnimSettingData },
			{ "TryGetAnimSettingData", &UELAnimSettingData::execTryGetAnimSettingData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics
	{
		struct ELAnimSettingData_eventAddAnimSettingData_Parms
		{
			UELAnimSettingData* AnimSettingData;
			UAnimationAsset* Animation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSettingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSettingData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::NewProp_AnimSettingData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::NewProp_AnimSettingData = { "AnimSettingData", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimSettingData_eventAddAnimSettingData_Parms, AnimSettingData), Z_Construct_UClass_UELAnimSettingData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::NewProp_AnimSettingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::NewProp_AnimSettingData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimSettingData_eventAddAnimSettingData_Parms, Animation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::NewProp_AnimSettingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimSettingData, nullptr, "AddAnimSettingData", nullptr, nullptr, sizeof(ELAnimSettingData_eventAddAnimSettingData_Parms), Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics
	{
		struct ELAnimSettingData_eventTryGetAnimSettingData_Parms
		{
			UELAnimSettingData* AnimSettingData;
			UAnimationAsset* Animation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSettingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSettingData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::NewProp_AnimSettingData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::NewProp_AnimSettingData = { "AnimSettingData", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimSettingData_eventTryGetAnimSettingData_Parms, AnimSettingData), Z_Construct_UClass_UELAnimSettingData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::NewProp_AnimSettingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::NewProp_AnimSettingData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimSettingData_eventTryGetAnimSettingData_Parms, Animation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::NewProp_AnimSettingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimSettingData, nullptr, "TryGetAnimSettingData", nullptr, nullptr, sizeof(ELAnimSettingData_eventTryGetAnimSettingData_Parms), Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimSettingData_NoRegister()
	{
		return UELAnimSettingData::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimSettingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideHipsBlendSpeed_MetaData[];
#endif
		static void NewProp_bOverrideHipsBlendSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideHipsBlendSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsBlendSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipsBlendSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttach_MetaData[];
#endif
		static void NewProp_bAttach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachBS_MetaData[];
#endif
		static void NewProp_bAttachBS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachBS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachSB_MetaData[];
#endif
		static void NewProp_bAttachSB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachSB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimSettingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimSettingData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimSettingData_AddAnimSettingData, "AddAnimSettingData" }, // 853229051
		{ &Z_Construct_UFunction_UELAnimSettingData_TryGetAnimSettingData, "TryGetAnimSettingData" }, // 2831210283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimSettingData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAnimSettingData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bOverrideHipsBlendSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimSettingData" },
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bOverrideHipsBlendSpeed_SetBit(void* Obj)
	{
		((UELAnimSettingData*)Obj)->bOverrideHipsBlendSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bOverrideHipsBlendSpeed = { "bOverrideHipsBlendSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimSettingData), &Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bOverrideHipsBlendSpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bOverrideHipsBlendSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bOverrideHipsBlendSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_HipsBlendSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimSettingData" },
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_HipsBlendSpeed = { "HipsBlendSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimSettingData, HipsBlendSpeed), METADATA_PARAMS(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_HipsBlendSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_HipsBlendSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimSettingData" },
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttach_SetBit(void* Obj)
	{
		((UELAnimSettingData*)Obj)->bAttach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttach = { "bAttach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimSettingData), &Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachBS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimSettingData" },
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachBS_SetBit(void* Obj)
	{
		((UELAnimSettingData*)Obj)->bAttachBS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachBS = { "bAttachBS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimSettingData), &Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachBS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachBS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachBS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachSB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimSettingData" },
		{ "ModuleRelativePath", "Public/ELAnimSettingData.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachSB_SetBit(void* Obj)
	{
		((UELAnimSettingData*)Obj)->bAttachSB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachSB = { "bAttachSB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimSettingData), &Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachSB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachSB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachSB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bOverrideHipsBlendSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_HipsBlendSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachBS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimSettingData_Statics::NewProp_bAttachSB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimSettingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimSettingData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimSettingData_Statics::ClassParams = {
		&UELAnimSettingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAnimSettingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimSettingData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimSettingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimSettingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimSettingData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimSettingData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimSettingData, 4056478211);
	template<> ELITE_GAME_API UClass* StaticClass<UELAnimSettingData>()
	{
		return UELAnimSettingData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimSettingData(Z_Construct_UClass_UELAnimSettingData, &UELAnimSettingData::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELAnimSettingData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimSettingData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
