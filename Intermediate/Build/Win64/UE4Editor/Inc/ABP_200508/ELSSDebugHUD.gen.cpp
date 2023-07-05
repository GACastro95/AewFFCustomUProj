// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDebugHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDebugHUD() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDebugHUD_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDebugHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugStringParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugStringStatus();
// End Cross Module References
	DEFINE_FUNCTION(AELSSDebugHUD::execSetDebugText)
	{
		P_GET_UBOOL(Z_Param_InIsShow);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InDebugText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugText(Z_Param_InIsShow,Z_Param_Out_InDebugText);
		P_NATIVE_END;
	}
	static FName NAME_AELSSDebugHUD_SetDebugString = FName(TEXT("SetDebugString"));
	void AELSSDebugHUD::SetDebugString(bool InIsShow, const FString& InDebugString)
	{
		ELSSDebugHUD_eventSetDebugString_Parms Parms;
		Parms.InIsShow=InIsShow ? true : false;
		Parms.InDebugString=InDebugString;
		ProcessEvent(FindFunctionChecked(NAME_AELSSDebugHUD_SetDebugString),&Parms);
	}
	static FName NAME_AELSSDebugHUD_UpdateDebugText = FName(TEXT("UpdateDebugText"));
	void AELSSDebugHUD::UpdateDebugText()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSDebugHUD_UpdateDebugText),NULL);
	}
	void AELSSDebugHUD::StaticRegisterNativesAELSSDebugHUD()
	{
		UClass* Class = AELSSDebugHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDebugText", &AELSSDebugHUD::execSetDebugText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics
	{
		static void NewProp_InIsShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDebugString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDebugString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InIsShow_SetBit(void* Obj)
	{
		((ELSSDebugHUD_eventSetDebugString_Parms*)Obj)->InIsShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InIsShow = { "InIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDebugHUD_eventSetDebugString_Parms), &Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InIsShow_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InDebugString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InDebugString = { "InDebugString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDebugHUD_eventSetDebugString_Parms, InDebugString), METADATA_PARAMS(Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InDebugString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InDebugString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InIsShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::NewProp_InDebugString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDebugHUD, nullptr, "SetDebugString", nullptr, nullptr, sizeof(ELSSDebugHUD_eventSetDebugString_Parms), Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDebugHUD_SetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDebugHUD_SetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics
	{
		struct ELSSDebugHUD_eventSetDebugText_Parms
		{
			bool InIsShow;
			FText InDebugText;
		};
		static void NewProp_InIsShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDebugText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InDebugText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InIsShow_SetBit(void* Obj)
	{
		((ELSSDebugHUD_eventSetDebugText_Parms*)Obj)->InIsShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InIsShow = { "InIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDebugHUD_eventSetDebugText_Parms), &Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InIsShow_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InDebugText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InDebugText = { "InDebugText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDebugHUD_eventSetDebugText_Parms, InDebugText), METADATA_PARAMS(Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InDebugText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InDebugText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InIsShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::NewProp_InDebugText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDebugHUD, nullptr, "SetDebugText", nullptr, nullptr, sizeof(ELSSDebugHUD_eventSetDebugText_Parms), Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDebugHUD_SetDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDebugHUD_SetDebugText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDebugHUD, nullptr, "UpdateDebugText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSDebugHUD_NoRegister()
	{
		return AELSSDebugHUD::StaticClass();
	}
	struct Z_Construct_UClass_AELSSDebugHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowLog_MetaData[];
#endif
		static void NewProp_IsShowLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateLogState_MetaData[];
#endif
		static void NewProp_UpdateLogState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateLogState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DebugText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetEveryFrame_MetaData[];
#endif
		static void NewProp_ResetEveryFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetEveryFrame;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnabledCategory_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnabledCategory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnabledCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugStringParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugStringParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugStringParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugStringParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugStringStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugStringStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugStringBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugStringBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSDebugHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSDebugHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSDebugHUD_SetDebugString, "SetDebugString" }, // 4033254624
		{ &Z_Construct_UFunction_AELSSDebugHUD_SetDebugText, "SetDebugText" }, // 2868498707
		{ &Z_Construct_UFunction_AELSSDebugHUD_UpdateDebugText, "UpdateDebugText" }, // 3111550378
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ELSSDebugHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_IsShowLog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	void Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_IsShowLog_SetBit(void* Obj)
	{
		((AELSSDebugHUD*)Obj)->IsShowLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_IsShowLog = { "IsShowLog", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSDebugHUD), &Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_IsShowLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_IsShowLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_IsShowLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_UpdateLogState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	void Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_UpdateLogState_SetBit(void* Obj)
	{
		((AELSSDebugHUD*)Obj)->UpdateLogState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_UpdateLogState = { "UpdateLogState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSDebugHUD), &Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_UpdateLogState_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_UpdateLogState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_UpdateLogState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugText = { "DebugText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDebugHUD, DebugText), METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_ResetEveryFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	void Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_ResetEveryFrame_SetBit(void* Obj)
	{
		((AELSSDebugHUD*)Obj)->ResetEveryFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_ResetEveryFrame = { "ResetEveryFrame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSDebugHUD), &Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_ResetEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_ResetEveryFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_ResetEveryFrame_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory_Inner = { "EnabledCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory = { "EnabledCategory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDebugHUD, EnabledCategory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParamTable = { "DebugStringParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDebugHUD, DebugStringParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParam = { "DebugStringParam", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DebugStringParam, AELSSDebugHUD), STRUCT_OFFSET(AELSSDebugHUD, DebugStringParam), Z_Construct_UScriptStruct_FSSDebugStringParam, METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringStatus = { "DebugStringStatus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DebugStringStatus, AELSSDebugHUD), STRUCT_OFFSET(AELSSDebugHUD, DebugStringStatus), Z_Construct_UScriptStruct_FSSDebugStringStatus, METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugHUD" },
		{ "ModuleRelativePath", "Public/ELSSDebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringBuffer = { "DebugStringBuffer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDebugHUD, DebugStringBuffer), METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringBuffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSDebugHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_IsShowLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_UpdateLogState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_ResetEveryFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_EnabledCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDebugHUD_Statics::NewProp_DebugStringBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSDebugHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSDebugHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSDebugHUD_Statics::ClassParams = {
		&AELSSDebugHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSDebugHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AELSSDebugHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDebugHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSDebugHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSDebugHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSDebugHUD, 2677055304);
	template<> ABP_200508_API UClass* StaticClass<AELSSDebugHUD>()
	{
		return AELSSDebugHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSDebugHUD(Z_Construct_UClass_AELSSDebugHUD, &AELSSDebugHUD::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSDebugHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSDebugHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
