// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/MessageDialog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageDialog() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UMessageDialog_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UMessageDialog();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	DEFINE_FUNCTION(UMessageDialog::execCallDialogYesNo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CallDialogYesNo(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageDialog::execCreateMessageDialog)
	{
		P_GET_OBJECT_REF(UMessageDialog,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMessageDialog::CreateMessageDialog(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	void UMessageDialog::StaticRegisterNativesUMessageDialog()
	{
		UClass* Class = UMessageDialog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallDialogYesNo", &UMessageDialog::execCallDialogYesNo },
			{ "CreateMessageDialog", &UMessageDialog::execCreateMessageDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics
	{
		struct MessageDialog_eventCallDialogYesNo_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageDialog_eventCallDialogYesNo_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageDialog_eventCallDialogYesNo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MessageDialog_eventCallDialogYesNo_Parms), &Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageDialog, nullptr, "CallDialogYesNo", nullptr, nullptr, sizeof(MessageDialog_eventCallDialogYesNo_Parms), Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageDialog_CallDialogYesNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageDialog_CallDialogYesNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics
	{
		struct MessageDialog_eventCreateMessageDialog_Parms
		{
			UMessageDialog* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageDialog_eventCreateMessageDialog_Parms, _pcInst), Z_Construct_UClass_UMessageDialog_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageDialog_eventCreateMessageDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MessageDialog_eventCreateMessageDialog_Parms), &Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageDialog, nullptr, "CreateMessageDialog", nullptr, nullptr, sizeof(MessageDialog_eventCreateMessageDialog_Parms), Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageDialog_CreateMessageDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMessageDialog_CreateMessageDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMessageDialog_NoRegister()
	{
		return UMessageDialog::StaticClass();
	}
	struct Z_Construct_UClass_UMessageDialog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageDialog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMessageDialog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMessageDialog_CallDialogYesNo, "CallDialogYesNo" }, // 2681213469
		{ &Z_Construct_UFunction_UMessageDialog_CreateMessageDialog, "CreateMessageDialog" }, // 619683823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageDialog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MessageDialog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MessageDialog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageDialog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageDialog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMessageDialog_Statics::ClassParams = {
		&UMessageDialog::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMessageDialog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageDialog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageDialog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMessageDialog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMessageDialog, 3742913352);
	template<> ELITE_API UClass* StaticClass<UMessageDialog>()
	{
		return UMessageDialog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMessageDialog(Z_Construct_UClass_UMessageDialog, &UMessageDialog::StaticClass, TEXT("/Script/ELITE"), TEXT("UMessageDialog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageDialog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
