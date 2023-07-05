// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerAssetLoadBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerAssetLoadBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerAssetLoadBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerAssetLoadBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execLoadAsset_CareerMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsset_CareerMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execLoadAsset_Event)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsset_Event();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execSetDataTable_EventAnimation)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_EventAnimation(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execSetDataTable_FacialAnimation)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_FacialAnimation(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execSetDataTable_MenuAnimation)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_MenuAnimation(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execSetDataTable_Prop)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Prop(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execSetDataTable_PropAnimation)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_PropAnimation(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerAssetLoadBase::execSetDataTable_TalkAnimation)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_TalkAnimation(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	void AELCareerAssetLoadBase::StaticRegisterNativesAELCareerAssetLoadBase()
	{
		UClass* Class = AELCareerAssetLoadBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAsset_CareerMenu", &AELCareerAssetLoadBase::execLoadAsset_CareerMenu },
			{ "LoadAsset_Event", &AELCareerAssetLoadBase::execLoadAsset_Event },
			{ "SetDataTable_EventAnimation", &AELCareerAssetLoadBase::execSetDataTable_EventAnimation },
			{ "SetDataTable_FacialAnimation", &AELCareerAssetLoadBase::execSetDataTable_FacialAnimation },
			{ "SetDataTable_MenuAnimation", &AELCareerAssetLoadBase::execSetDataTable_MenuAnimation },
			{ "SetDataTable_Prop", &AELCareerAssetLoadBase::execSetDataTable_Prop },
			{ "SetDataTable_PropAnimation", &AELCareerAssetLoadBase::execSetDataTable_PropAnimation },
			{ "SetDataTable_TalkAnimation", &AELCareerAssetLoadBase::execSetDataTable_TalkAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "LoadAsset_CareerMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "LoadAsset_Event", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics
	{
		struct ELCareerAssetLoadBase_eventSetDataTable_EventAnimation_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAssetLoadBase_eventSetDataTable_EventAnimation_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "SetDataTable_EventAnimation", nullptr, nullptr, sizeof(ELCareerAssetLoadBase_eventSetDataTable_EventAnimation_Parms), Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics
	{
		struct ELCareerAssetLoadBase_eventSetDataTable_FacialAnimation_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAssetLoadBase_eventSetDataTable_FacialAnimation_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "SetDataTable_FacialAnimation", nullptr, nullptr, sizeof(ELCareerAssetLoadBase_eventSetDataTable_FacialAnimation_Parms), Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics
	{
		struct ELCareerAssetLoadBase_eventSetDataTable_MenuAnimation_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAssetLoadBase_eventSetDataTable_MenuAnimation_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "SetDataTable_MenuAnimation", nullptr, nullptr, sizeof(ELCareerAssetLoadBase_eventSetDataTable_MenuAnimation_Parms), Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics
	{
		struct ELCareerAssetLoadBase_eventSetDataTable_Prop_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAssetLoadBase_eventSetDataTable_Prop_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "SetDataTable_Prop", nullptr, nullptr, sizeof(ELCareerAssetLoadBase_eventSetDataTable_Prop_Parms), Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics
	{
		struct ELCareerAssetLoadBase_eventSetDataTable_PropAnimation_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAssetLoadBase_eventSetDataTable_PropAnimation_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "SetDataTable_PropAnimation", nullptr, nullptr, sizeof(ELCareerAssetLoadBase_eventSetDataTable_PropAnimation_Parms), Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics
	{
		struct ELCareerAssetLoadBase_eventSetDataTable_TalkAnimation_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAssetLoadBase_eventSetDataTable_TalkAnimation_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerAssetLoadBase, nullptr, "SetDataTable_TalkAnimation", nullptr, nullptr, sizeof(ELCareerAssetLoadBase_eventSetDataTable_TalkAnimation_Parms), Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerAssetLoadBase_NoRegister()
	{
		return AELCareerAssetLoadBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerAssetLoadBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMenuAnimation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMenuAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_pMenuAnimation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pEventAnimation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pEventAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_pEventAnimation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pFacialAnimation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pFacialAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_pFacialAnimation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pTalkAnimation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pTalkAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_pTalkAnimation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_EventAnimationHiddenTimeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EventAnimationHiddenTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_EventAnimationHiddenTimeArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pPropModel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pPropModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_pPropModel;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_m_AttachSocketArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttachSocketArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_AttachSocketArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PositionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PositionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PositionArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_RotationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RotationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_RotationArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pPropAnimation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pPropAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_pPropAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerAssetLoadBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerAssetLoadBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_CareerMenu, "LoadAsset_CareerMenu" }, // 1235955267
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_LoadAsset_Event, "LoadAsset_Event" }, // 4208724433
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_EventAnimation, "SetDataTable_EventAnimation" }, // 1606112749
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_FacialAnimation, "SetDataTable_FacialAnimation" }, // 1101599763
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_MenuAnimation, "SetDataTable_MenuAnimation" }, // 2725067531
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_Prop, "SetDataTable_Prop" }, // 989511425
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_PropAnimation, "SetDataTable_PropAnimation" }, // 3095273925
		{ &Z_Construct_UFunction_AELCareerAssetLoadBase_SetDataTable_TalkAnimation, "SetDataTable_TalkAnimation" }, // 4015813298
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerAssetLoadBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pMenuAnimation_Inner = { "m_pMenuAnimation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pMenuAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pMenuAnimation = { "m_pMenuAnimation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_pMenuAnimation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pMenuAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pMenuAnimation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pEventAnimation_Inner = { "m_pEventAnimation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pEventAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pEventAnimation = { "m_pEventAnimation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_pEventAnimation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pEventAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pEventAnimation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pFacialAnimation_Inner = { "m_pFacialAnimation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pFacialAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pFacialAnimation = { "m_pFacialAnimation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_pFacialAnimation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pFacialAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pFacialAnimation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pTalkAnimation_Inner = { "m_pTalkAnimation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pTalkAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pTalkAnimation = { "m_pTalkAnimation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_pTalkAnimation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pTalkAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pTalkAnimation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_EventAnimationHiddenTimeArray_Inner = { "m_EventAnimationHiddenTimeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_EventAnimationHiddenTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_EventAnimationHiddenTimeArray = { "m_EventAnimationHiddenTimeArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_EventAnimationHiddenTimeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_EventAnimationHiddenTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_EventAnimationHiddenTimeArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropModel_Inner = { "m_pPropModel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropModel = { "m_pPropModel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_pPropModel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropModel_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_AttachSocketArray_Inner = { "m_AttachSocketArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_AttachSocketArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_AttachSocketArray = { "m_AttachSocketArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_AttachSocketArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_AttachSocketArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_AttachSocketArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_PositionArray_Inner = { "m_PositionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_PositionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_PositionArray = { "m_PositionArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_PositionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_PositionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_PositionArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_RotationArray_Inner = { "m_RotationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_RotationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_RotationArray = { "m_RotationArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_RotationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_RotationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_RotationArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropAnimation_Inner = { "m_pPropAnimation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAssetLoadBase" },
		{ "ModuleRelativePath", "Public/ELCareerAssetLoadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropAnimation = { "m_pPropAnimation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerAssetLoadBase, m_pPropAnimation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerAssetLoadBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pMenuAnimation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pMenuAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pEventAnimation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pEventAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pFacialAnimation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pFacialAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pTalkAnimation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pTalkAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_EventAnimationHiddenTimeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_EventAnimationHiddenTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropModel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_AttachSocketArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_AttachSocketArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_PositionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_PositionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_RotationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_RotationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropAnimation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerAssetLoadBase_Statics::NewProp_m_pPropAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerAssetLoadBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerAssetLoadBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerAssetLoadBase_Statics::ClassParams = {
		&AELCareerAssetLoadBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerAssetLoadBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerAssetLoadBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerAssetLoadBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerAssetLoadBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerAssetLoadBase, 1140122771);
	template<> ABP_200508_API UClass* StaticClass<AELCareerAssetLoadBase>()
	{
		return AELCareerAssetLoadBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerAssetLoadBase(Z_Construct_UClass_AELCareerAssetLoadBase, &AELCareerAssetLoadBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerAssetLoadBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerAssetLoadBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
